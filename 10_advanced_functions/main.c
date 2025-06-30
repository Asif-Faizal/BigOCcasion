#include <stdio.h>

// --- 1. Pass-by-Value vs. Pass-by-Reference ---

// Pass-by-value: The function gets a *copy* of the variable's value.
// Changes made to the parameter inside the function do not affect the original variable.
void cannotChange(int x) {
    x = 100; // This only changes the local copy 'x'.
}

// Pass-by-reference (using a pointer): The function gets the *memory address*
// of the variable. It can then modify the original variable's value directly.
void canChange(int *x_ptr) {
    *x_ptr = 100; // This changes the value at the original address.
}


// --- 2. Static Functions ---

// By default, functions are "global". The 'static' keyword limits the scope
// of a function to the file it is declared in. It's a form of encapsulation,
// preventing it from being called from other files.
static void helperFunction() {
    printf("   This is a static helper function, only visible within this file.\n");
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

// Note on Inline functions: 'inline' is a hint to the compiler to perform
// inline expansion, which can improve performance for very small functions.
// It's not a command. Example: inline int max(int a, int b) { return a > b ? a : b; }


int main() {
    printf("--- Advanced Function Concepts ---\n\n");

    // --- Pass-by-Value vs. Pass-by-Reference ---
    printf("1. Pass-by-Value vs. Pass-by-Reference:\n");
    int num = 10;
    printf("   Original num: %d\n", num);
    cannotChange(num);
    printf("   After cannotChange(num): %d (unchanged)\n", num);
    canChange(&num); // We pass the address of 'num' using '&'
    printf("   After canChange(&num): %d (changed!)\n\n", num);

    // --- Static Functions ---
    printf("2. Static Functions:\n");
    helperFunction(); // Can be called here
    printf("\n");

    // --- Recursive Functions ---
    printf("3. Recursive Functions (Factorial):\n");
    int fact_num = 6;
    printf("   Factorial of %d is %llu\n", fact_num, factorial(fact_num));

    return 0;
} 