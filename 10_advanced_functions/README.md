# 10. Advanced C Function Concepts

Beyond basic declarations and definitions, these concepts are crucial for writing effective, modular, and efficient C code.

## 1. Pass-by-Value vs. Pass-by-Reference

This is one of the most important function concepts in C. It determines whether a function can change the original variables passed to it.

- **Pass-by-Value (The Default)**: The function receives a *copy* of the argument's value. Any modifications made to the parameter inside the function **do not** affect the original variable.

    ```c
    void cannotChange(int x) {
        x = 100; // Modifies only the local copy.
    }
    
    int main() {
        int num = 10;
        cannotChange(num);
        // 'num' is still 10 here.
    }
    ```

- **Pass-by-Reference (Using Pointers)**: Instead of a value, you pass the *memory address* of a variable (a pointer). By dereferencing the pointer (`*`), the function can access and modify the original variable's value.

    ```c
    void canChange(int *x_ptr) {
        *x_ptr = 100; // Modifies the original value at the address.
    }

    int main() {
        int num = 10;
        canChange(&num); // Pass the address of num using '&'
        // 'num' is now 100 here.
    }
    ```

## 2. `static` Functions

By default, any function you define is "global," meaning it can be called from any other file in your project. The `static` keyword changes this.

A `static` function is **only visible within the file it is defined in**.

**Use Case (Encapsulation):** This is extremely useful for creating "private" helper functions. It prevents other parts of your program from accidentally calling them and hides implementation details.

```c
// This function can only be called by other functions in this same .c file.
static void helperFunction() {
    printf("This is a private helper.\n");
}
```

## 3. Recursive Functions

A recursive function is one that calls itself to solve a problem. It works by breaking a problem down into smaller, identical subproblems until it reaches a simple "base case."

Every recursive function must have two parts:

1. **Base Case**: A condition that stops the recursion.
2. **Recursive Step**: The part that calls itself with a modified argument, moving closer to the base case.

### Classic Example: Factorial

```c
unsigned long long factorial(int n) {
    // Base case
    if (n <= 1) {
        return 1;
    }
    // Recursive step: n! = n * (n-1)!
    return n * factorial(n - 1);
}
```

## 4. `inline` Functions

The `inline` keyword is a **hint** to the compiler, not a command. It suggests that the compiler replace a call to a function with the function's actual code, right at the call site.

**Use Case (Performance):** This can eliminate the overhead of a function call, which can be a minor performance boost for very small, frequently-called functions. Modern compilers are often smart enough to do this automatically, so it's used less often now.

```c
// A candidate for inlining because it's short and simple.
inline int max(int a, int b) {
    return a > b ? a : b;
}
```
