#include <stdio.h>

// --- Function Declarations (Prototypes) ---
// A function declaration tells the compiler about a function's name, return type,
// and parameters. This allows you to call the function before it's defined.
int add(int a, int b); // Declaration for the 'add' function
void printMessage(void);   // Declaration for a function with no parameters and no return value

// --- Main Function: Program Execution Starts Here ---
int main() {
    printf("--- Functions in C ---\n\n");

    // Calling the 'add' function, which is defined later in the file.
    // This is only possible because we declared it above.
    int sum = add(10, 25);
    printf("The sum is: %d\n", sum);

    // Calling the 'printMessage' function.
    printMessage();
    
    // You can also define a function before main, in which case a prototype is not needed.
    // But using prototypes for all non-static functions is good practice.

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
 * @brief Prints a simple message to the console.
 * This function takes no arguments (void) and returns no value (void).
 */
void printMessage(void) {
    printf("This is a message from the printMessage function!\n");
} 