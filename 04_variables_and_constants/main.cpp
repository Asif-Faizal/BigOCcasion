#include <iostream>
#include <iomanip>

// A global variable (use sparingly in C++)
int globalVar = 100;

// C++ offers better ways to define constants than #define.
// 'const' is evaluated at runtime.
const float PI_CONST = 3.14159f;

// 'constexpr' is evaluated at compile-time, which is often more efficient.
constexpr int SIDES_OF_SQUARE = 4;

int main() {
    // --- VARIABLES ---
    std::cout << "--- Demonstrating Variables ---" << std::endl << std::endl;

    // 1. Declaration and Initialization
    // C++ supports several initialization syntaxes.
    int score = 95;             // C-style initialization
    float temperature(25.5f);   // Constructor initialization
    char grade{'A'};            // Uniform initialization (often preferred)

    std::cout << "Initial values:" << std::endl;
    std::cout << "Score: " << score << ", Temperature: " << std::fixed << std::setprecision(1) << temperature << ", Grade: " << grade << std::endl;
    std::cout << "Global variable initially: " << globalVar << std::endl;


    // 2. Changing the value of a variable
    score = 100;
    globalVar = 150;
    std::cout << "\nAfter changing values:" << std::endl;
    std::cout << "New Score: " << score << std::endl;
    std::cout << "Global variable is now: " << globalVar << std::endl;


    // 3. Multiple declarations
    int x, y, z;
    x = 10;
    y = 20;
    z = x + y;
    std::cout << "\nMultiple declarations:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;


    // --- CONSTANTS ---
    std::cout << "\n\n--- Demonstrating Constants ---" << std::endl << std::endl;

    // 1. Using 'const' keyword
    const float GST_RATE = 0.18f;

    std::cout << "Constants with 'const' and 'constexpr':" << std::endl;
    std::cout << "Sides of a square (constexpr): " << SIDES_OF_SQUARE << std::endl;
    std::cout << "GST Rate (const): " << std::fixed << std::setprecision(2) << GST_RATE << std::endl;
    std::cout << "The value of PI (const): " << PI_CONST << std::endl;

    // Trying to change a constant will cause a compilation error:
    // SIDES_OF_SQUARE = 5; // Error: cannot assign to a variable that is const

    std::cout << "\nIn C++, 'const' and 'constexpr' are preferred over '#define' because they are type-safe and respect scope." << std::endl;

    return 0;
} 