#include <iostream>
#include <string>   // For using the std::string class
#include <iomanip>  // For std::fixed and std::setprecision
#include <limits>   // For std::numeric_limits

/*
  This is a multi-line comment.
  This program demonstrates C++ I/O (Input/Output) streams (cin, cout)
  and how they are used to interact with the user.
*/

int main() {
    // --- DEMONSTRATING COMMENTS, COUT & CIN ---

    // Variable declarations
    int age;
    float weight;
    char initial;
    // std::string is the standard C++ way to handle text. It's safer
    // and more convenient than C-style char arrays.
    std::string fullName;

    // --- Using std::cout to prompt the user ---
    std::cout << "--- User Input Example ---" << std::endl << std::endl;
    std::cout << "Please enter your details below." << std::endl;

    // --- Taking INTEGER input ---
    std::cout << "Enter your age: ";
    std::cin >> age;

    // --- Taking FLOAT input ---
    std::cout << "Enter your weight (in kg): ";
    std::cin >> weight;

    // --- Taking CHAR input ---
    std::cout << "Enter your first initial: ";
    std::cin >> initial;

    // --- Taking STRING input ---
    std::cout << "Enter your full name: ";
    // Before reading a line with getline, we need to clear the input buffer.
    // The previous "std::cin >> initial" left a newline character behind.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, fullName);


    // --- Using std::cout to display the collected data ---
    std::cout << "\n--- Your Details ---" << std::endl;
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Age: " << age << " years old" << std::endl;
    // Printing float with 2 decimal places
    std::cout << "Weight: " << std::fixed << std::setprecision(2) << weight << " kg" << std::endl;

    return 0; // End of the program
} 