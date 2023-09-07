#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    // Check for valid input
    if (n <= 0) {
        std::cout << "Please enter a positive number of integers." << std::endl;
        return 1;
    }

    std::vector<int> numbers(n);

    std::cout << "Enter " << n << " integers separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // Sort the vector in increasing order
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted numbers in increasing order: ";
    for (int i = 0; i < n; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

