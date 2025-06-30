#include <stdio.h>

// Using #define to create a constant
#define PI 3.14159

// A global variable
int globalVar = 100;

int main() {
    // --- VARIABLES ---
    printf("--- Demonstrating Variables ---\n\n");

    // 1. Declaration and Initialization
    int score = 95;
    float temperature = 25.5f;
    char grade = 'A';

    printf("Initial values:\n");
    printf("Score: %d, Temperature: %.1f, Grade: %c\n", score, temperature, grade);
    printf("Global variable initially: %d\n", globalVar);


    // 2. Changing the value of a variable
    score = 100;
    globalVar = 150;
    printf("\nAfter changing values:\n");
    printf("New Score: %d\n", score);
    printf("Global variable is now: %d\n", globalVar);


    // 3. Multiple declarations
    int x, y, z;
    x = 10;
    y = 20;
    z = x + y;
    printf("\nMultiple declarations:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);


    // --- CONSTANTS ---
    printf("\n\n--- Demonstrating Constants ---\n\n");

    // 1. Using the 'const' keyword
    const int SIDES_OF_SQUARE = 4;
    const float GST_RATE = 0.18f;

    printf("Constants with 'const' keyword:\n");
    printf("Sides of a square: %d\n", SIDES_OF_SQUARE);
    printf("GST Rate: %.2f\n", GST_RATE);

    // Trying to change a const will cause a compilation error:
    // SIDES_OF_SQUARE = 5; // Uncommenting this line will result in an error


    // 2. Using '#define' (preprocessor directive)
    printf("\nConstant with '#define':\n");
    printf("The value of PI is: %f\n", PI);

    // '#define' constants cannot be changed either.
    // PI = 3.14; // This would cause a compilation error.

    return 0;
} 