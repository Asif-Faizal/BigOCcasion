#include <iostream>

// --- Function Declarations (Prototypes) ---
// A function declaration tells the compiler about a function's name, return type,
// and parameters. This allows you to call the function before it's defined.
// In C++, declaring a function with no parameters uses empty parentheses.
int add(int a, int b);
void printMessage();

// --- C++ Function Overloading ---
// C++ allows you to define multiple functions with the same name, as long as
// their parameter lists are different (either by number or type of arguments).
// This is called function overloading.
double add(double a, double b);


// --- Main Function: Program Execution Starts Here ---
int main() {
    std::cout << "--- Functions in C++ ---" << std::endl << std::endl;

    // Calling the integer version of the 'add' function.
    int int_sum = add(10, 25);
    std::cout << "The sum of integers is: " << int_sum << std::endl;

    // Calling the overloaded 'add' function with doubles.
    // The compiler automatically selects the correct version based on the arguments.
    double double_sum = add(5.5, 4.4);
    std::cout << "The sum of doubles is: " << double_sum << std::endl;

    // Calling the 'printMessage' function.
    printMessage();

    return 0;
}

// --- Function Definitions ---
// A function definition provides the actual body (the code) of the function.

/**
 * @brief Adds two integers together.
 * 
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b.
 */
int add(int a, int b) {
    // This is the function's body/implementation
    return a + b;
}

/**
 * @brief Adds two doubles together (Overloaded version).
 * @param a The first double.
 * @param b The second double.
 * @return The sum of a and b.
 */
double add(double a, double b) {
    return a + b;
}


/**
 * @brief Prints a simple message to the console.
 * This function takes no arguments and returns no value.
 */
void printMessage() {
    std::cout << "This is a message from the printMessage function!" << std::endl;
} 