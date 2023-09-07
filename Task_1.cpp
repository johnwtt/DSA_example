#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a sentence: ";
    std::string sentence;
    std::getline(std::cin, sentence);

    // Calculate the length of the sentence
    int length = sentence.length();

    // Print the sentence in reverse order
    std::cout << "Reversed sentence: ";
    for (int i = length - 1; i >= 0; i--) {
        std::cout << sentence[i];
    }

    std::cout << std::endl;

    return 0;
}

