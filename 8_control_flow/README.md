# 8. C++ Control Flow Statements (`break`, `continue`, `goto`)

This section covers three statements that alter the normal, sequential flow of program execution: `break`, `continue`, and `goto`.

## 1. The `break` Statement

The `break` statement is used to immediately terminate the loop (`for`, `while`, `do-while`, range-`for`) or `switch` statement that it is in. Control of the program flows to the statement immediately following the body of the terminated statement.

**Use Case:** Exiting a loop early when a specific condition is met.

**Example from `main.cpp`:** This loop is set to run 10 times, but `break` stops it when `i` equals 5.

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        std::cout << "   Breaking the loop at i = 5" << std::endl;
        break; // The loop terminates here
    }
    std::cout << "   i = " << i << std::endl;
}
```

## 2. The `continue` Statement

The `continue` statement skips the rest of the code in the current iteration of a loop and immediately proceeds to the next iteration. Unlike `break`, it does not terminate the loop entirely.

**Use Case:** Skipping a single iteration of a loop based on a condition, without stopping the whole loop.

**Example from `main.cpp`:** This loop skips the `std::cout` statement for all even numbers.

```cpp
for (int j = 1; j <= 10; j++) {
    if (j % 2 == 0) {
        continue; // Skip the rest of this iteration
    }
    std::cout << "   j = " << j << std::endl;
}
```

## 3. The `goto` Statement

The `goto` statement provides an unconditional jump from the `goto` to a labeled statement somewhere in the same function.

**WARNING: The use of `goto` is almost universally considered bad practice in C++ and should be avoided.**

### Why Avoid `goto` in C++?

- **RAII Hostile**: `goto` jumps can bypass the destructors of objects whose scope is exited. This is a major problem in C++ and can lead to resource leaks (memory, file handles, locks, etc.). This is the single most important reason to avoid it.
- **Unstructured Control Flow**: It makes the code's logic difficult to follow, leading to "spaghetti code."
- **Harder to Debug**: Tracing the program's execution path becomes extremely difficult.
- **Better Alternatives**: Any problem solvable with `goto` can be solved more cleanly and safely with `if`, `switch`, loops, and functions.

### The Right Way: Replacing `goto` with a Loop

The logic from the original C example, which used `goto` to create a loop, was refactored in `main.cpp` into a simple `do-while` loop. This is the idiomatic, safe, and readable C++ approach.

**The `goto` logic refactored in `main.cpp`:**

```cpp
int input;
do {
    std::cout << "   Enter a number. Enter 0 to exit." << std::endl;
    std::cout << "   Your input: ";
    std::cin >> input;

    if (input != 0) {
        std::cout << "   You entered " << input << ". Try again." << std::endl;
    }
} while (input != 0); // The loop continues as long as input is not 0.

std::cout << "   Exited the loop cleanly." << std::endl;
```
