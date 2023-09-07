#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<double> numbers(5);

    std::cout << "Enter 5 different real numbers separated by spaces: ";
    for (int i = 0; i < 5; ++i) {
        std::cin >> numbers[i];
    }

    // Find the greatest and smallest numbers
    double greatest = numbers[0];
    double smallest = numbers[0];

    for (int i = 1; i < 5; ++i) {
        if (numbers[i] > greatest) {
            greatest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Calculate and print the sum
    double sum = greatest + smallest;
    
    std::cout << "Sum of the greatest and smallest numbers: " << sum << std::endl;

    return 0;
}

