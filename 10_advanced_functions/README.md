# 10. Advanced C++ Function Concepts

These concepts are crucial for writing effective, modular, and safe C++ code, building upon the foundations inherited from C.

## 1. Pass-by-Value vs. Pass-by-Reference

This determines whether a function can change the original variables passed to it.

- **Pass-by-Value (The Default)**: The function receives a *copy* of the argument's value. Modifications inside the function **do not** affect the original variable.

    ```cpp
    void cannotChange(int x) {
        x = 100; // Modifies only the local copy.
    }
    ```

- **Pass-by-Reference (The C++ Way)**: C++ introduces **references** (`&`), which provide a safer and more readable way to pass by reference. The function receives an alias to the original variable, not a copy.

    ```cpp
    void canChangeWithReference(int& x_ref) {
        x_ref = 100; // Modifies the original variable.
    }

    int main() {
        int num = 10;
        canChangeWithReference(num); // No special syntax needed at call site.
        // 'num' is now 100 here.
    }
    ```

- **Pass-by-Pointer (The C Way)**: This method also works in C++ but is often more verbose and slightly less safe than using references. You pass the *memory address* of a variable.

    ```cpp
    void canChangeWithPointer(int* x_ptr) {
        *x_ptr = 100; // Modifies the original value at the address.
    }

    int main() {
        int num = 10;
        canChangeWithPointer(&num); // Must pass the address using '&'.
        // 'num' is now 100 here.
    }
    ```

**Conclusion**: Prefer pass-by-reference over pass-by-pointer when you need a function to modify its arguments. Use pointers when you need to express that a parameter is optional (by passing `nullptr`).

## 2. Limiting Linkage: `static` vs. Anonymous Namespaces

- **`static` Functions**: As in C, the `static` keyword on a free function limits its linkage to the current file. It's a way to create "private" helper functions.

- **Anonymous Namespaces (Modern C++ Way)**: A more idiomatic C++ approach is to place helper functions inside an anonymous namespace. Everything within the namespace is only visible to the current file, and it avoids cluttering the global namespace. It can also be used for variables and types, not just functions.

    ```cpp
    // Everything in here is local to this .cpp file.
    namespace {
        void myHelper() { /* ... */ }
        int file_local_variable = 0;
    }
    ```

## 3. Recursive Functions

A recursive function is one that calls itself. The logic is the same as in C, requiring a base case and a recursive step. C++ adds the ability to make some recursive functions `constexpr`.

- **`constexpr` Functions (C++11 and later)**: If a function's result can be computed at compile time, declaring it `constexpr` allows the compiler to do so, potentially leading to significant performance gains. Factorial is a classic example.

    ```cpp
    // Compiler can calculate constexpr_factorial(5) at compile time.
    constexpr unsigned long long constexpr_factorial(int n) {
        return (n <= 1) ? 1 : (n * constexpr_factorial(n - 1));
    }
    ```

## 4. `inline` Functions

The `inline` keyword is a **hint** to the compiler to replace a function call with its body, eliminating call overhead. Modern compilers are excellent at making their own inlining decisions, so `inline` is less about performance and more about semantics: it's required for function definitions that appear in header files (to prevent linker errors).

## Pseudocode

```xml
BEGIN
    DECLARE num = 10
    PRINT "Original num: " + num

    // Pass-by-Reference
    CALL canChangeWithReference(num)
    PRINT "After by-reference call: " + num

    // Reset num
    num = 10
    
    // Pass-by-Pointer
    CALL canChangeWithPointer(address of num)
    PRINT "After by-pointer call: " + num

    // Recursive Function
    factorial_of_5 = CALL constexpr_factorial(5)
    PRINT "Factorial of 5 is " + factorial_of_5
END

// Function Definitions
FUNCTION canChangeWithReference(REFERENCE_TO_INTEGER x_ref):
    x_ref = 100
END FUNCTION

FUNCTION canChangeWithPointer(POINTER_TO_INTEGER x_ptr):
    value_at(x_ptr) = 100
END FUNCTION

FUNCTION constexpr_factorial(INTEGER n):
    IF n <= 1 THEN
        RETURN 1
    ELSE
        RETURN n * CALL constexpr_factorial(n - 1)
    END IF
END FUNCTION
```

## Flowchart

### Recursive Factorial Function

```mermaid
graph TD;
    A[Start factorial(n)] --> B{n <= 1?};
    B -- True --> C[Return 1];
    B -- False --> D["result = n * factorial(n-1)"];
    D --> E[Return result];
    E --> A;
```
