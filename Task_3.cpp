#include <iostream>

// Function to calculate the GCD of two integers using the Euclidean algorithm
int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int main() {
    int m, n;

    // Read input
    std::cout << "Enter two positive integer numbers (m and n): ";
    std::cin >> m >> n;

    if (m <= 0 || n <= 0) {
        std::cout << "Please enter positive integers." << std::endl;
        return 1;
    }

    // Calculate and print the GCD
    int result = gcd(m, n);
    std::cout << "The greatest common divisor (GCD) of " << m << " and " << n << " is: " << result << std::endl;

    return 0;
}

