#include <iostream>
#include <string>

int main() {
    // Variables to hold the input strings
    std::string firstString, secondString, resultString;

    // Loop to get input and concatenate three times
    for (int i = 1; i <= 3; i++) {
        std::cout << "Enter the first string (" << i << "): ";
        std::getline(std::cin, firstString);  // Read the first string

        std::cout << "Enter the second string (" << i << "): ";
        std::getline(std::cin, secondString);  // Read the second string

        // Concatenate the two strings
        resultString = firstString + secondString;

        // Print the concatenated result
        std::cout << "The concatenated string is: " << resultString << std::endl;
    }

    return 0;
}
