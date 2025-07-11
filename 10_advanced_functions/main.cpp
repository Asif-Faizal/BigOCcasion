#include <iostream>

// --- 1. Pass-by-Value vs. Pass-by-Reference ---

// Pass-by-value: The function gets a *copy* of the variable's value.
// Changes made to the parameter inside the function do not affect the original variable.
void cannotChange(int x) {
    x = 100; // This only changes the local copy 'x'.
}

// Pass-by-reference using a C++ reference (&). This is the idiomatic C++ way.
// It's generally safer and easier to read than using pointers.
void canChangeWithReference(int& x_ref) {
    x_ref = 100; // This changes the original variable.
}

// Pass-by-reference using a pointer (the C way, also works in C++).
void canChangeWithPointer(int* x_ptr) {
    *x_ptr = 100; // This changes the value at the original address.
}


// --- 2. Static Functions vs. Anonymous Namespaces ---

// The 'static' keyword in C++ for free functions limits its linkage to the current
// file, similar to C.
static void helperFunction() {
    std::cout << "   This is a static helper function." << std::endl;
}

// A more modern C++ way to achieve file-local scope is using an anonymous namespace.
// Everything inside is only visible within this file.
namespace {
    void anotherHelper() {
        std::cout << "   This helper is in an anonymous namespace." << std::endl;
    }
}


// --- 3. Recursive Functions ---

// A recursive function is a function that calls itself to solve a problem.
// It must have a "base case" to prevent infinite recursion.
unsigned long long factorial(int n) {
    // Base case: If n is 0 or 1, the factorial is 1. This stops the recursion.
    if (n <= 1) {
        return 1;
    }
    // Recursive step: The function calls itself with a smaller version of the problem.
    return n * factorial(n - 1);
}

// Note on 'inline': The 'inline' keyword works as a hint in C++ too.
// Note on 'constexpr': For functions that can be evaluated at compile-time,
// C++ offers 'constexpr', which can enable powerful optimizations.
// A constexpr version of factorial could be:
// constexpr unsigned long long constexpr_factorial(int n) {
//     return (n <= 1) ? 1 : (n * constexpr_factorial(n - 1));
// }


int main() {
    std::cout << "--- Advanced Function Concepts in C++ ---" << std::endl << std::endl;

    // --- Pass-by-Value vs. Pass-by-Reference ---
    std::cout << "1. Pass-by-Value vs. Pass-by-Reference:" << std::endl;
    int num = 10;
    std::cout << "   Original num: " << num << std::endl;
    
    cannotChange(num);
    std::cout << "   After cannotChange(num): " << num << " (unchanged)" << std::endl;
    
    // Resetting num for the next test
    num = 10; 
    canChangeWithPointer(&num); // We pass the address of 'num'
    std::cout << "   After canChangeWithPointer(&num): " << num << " (changed with pointer)" << std::endl;

    // Resetting num again
    num = 10; 
    canChangeWithReference(num); // C++ references don't need special syntax at the call site.
    std::cout << "   After canChangeWithReference(num): " << num << " (changed with reference!)" << std::endl << std::endl;


    // --- Static Functions & Anonymous Namespaces ---
    std::cout << "2. File-Local Scope:" << std::endl;
    helperFunction();
    anotherHelper();
    std::cout << std::endl;

    // --- Recursive Functions ---
    std::cout << "3. Recursive Functions (Factorial):" << std::endl;
    int fact_num = 6;
    std::cout << "   Factorial of " << fact_num << " is " << factorial(fact_num) << std::endl;

    return 0;
} 