#include <iostream>

class Point {
public:
    double x, y;

    Point() : x(0.0), y(0.0) {}
    Point(double x, double y) : x(x), y(y) {}
};

class Line {
public:
    Point start, end;

    Line() {}
    Line(Point start, Point end) : start(start), end(end) {}
};

// Function to check if two lines intersect and find their intersection point
bool findIntersection(const Line& line1, const Line& line2, Point& intersection) {
    double x1 = line1.start.x, y1 = line1.start.y;
    double x2 = line1.end.x, y2 = line1.end.y;
    double x3 = line2.start.x, y3 = line2.start.y;
    double x4 = line2.end.x, y4 = line2.end.y;

    double denominator = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);

    // Check if the lines are parallel (denominator is close to zero)
    if (std::abs(denominator) < 1e-9) {
        // Lines are parallel, so they either have no intersection or many intersections
        if ((x1 - x3) * (y3 - y4) == (y1 - y3) * (x3 - x4)) {
            return false; // Many intersections
        } else {
            return false; // No intersection
        }
    }

    double t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / denominator;
    double u = -((x1 - x2) * (y1 - y3) - (y1 - y2) * (x1 - x3)) / denominator;

    // Check if the intersection point is within the line segments
    if (t >= 0 && t <= 1 && u >= 0 && u <= 1) {
        intersection.x = x1 + t * (x2 - x1);
        intersection.y = y1 + t * (y2 - y1);
        return true;
    }

    return false; // Lines do not intersect within their segments
}

int main() {
    Point A, B, C, D;
    Point intersection;

    // Read input
    std::cout << "Enter the coordinates of point A (x y): ";
    std::cin >> A.x >> A.y;

    std::cout << "Enter the coordinates of point B (x y): ";
    std::cin >> B.x >> B.y;

    std::cout << "Enter the coordinates of point C (x y): ";
    std::cin >> C.x >> C.y;

    std::cout << "Enter the coordinates of point D (x y): ";
    std::cin >> D.x >> D.y;

    Line AB(A, B);
    Line CD(C, D);

    // Find intersection point
    if (findIntersection(AB, CD, intersection)) {
        std::cout << "Intersection point: " << intersection.x << " " << intersection.y << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
