# 8. C Control Flow Statements (`break`, `continue`, `goto`)

This section covers three statements that alter the normal flow of program execution: `break`, `continue`, and `goto`.

## 1. The `break` Statement

The `break` statement is used to immediately terminate the loop (`for`, `while`, `do-while`) or `switch` statement that it is in. Control of the program flows to the statement immediately following the body of the terminated statement.

**Use Case:** Exiting a loop early when a specific condition is met.

**Example from `main.c`:** This loop is set to run 10 times, but `break` stops it when `i` equals 5.

```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        printf("   Breaking the loop at i = 5\n");
        break; // The loop terminates here
    }
    printf("   i = %d\n", i);
}
```

**Output:** The numbers 1, 2, 3, and 4 will be printed, followed by the "Breaking..." message. The loop will not run for `i = 5` through `10`.

## 2. The `continue` Statement

The `continue` statement skips the rest of the code in the current iteration of a loop and immediately proceeds to the next iteration. Unlike `break`, it does not terminate the loop entirely.

**Use Case:** Skipping a single iteration of a loop based on a condition, without stopping the whole loop.

**Example from `main.c`:** This loop skips the `printf` statement for all even numbers.

```c
for (int j = 1; j <= 10; j++) {
    if (j % 2 == 0) {
        continue; // Skip the rest of this iteration
    }
    printf("   j = %d\n", j);
}
```

**Output:** Only the odd numbers (1, 3, 5, 7, 9) will be printed.

## 3. The `goto` Statement

The `goto` statement provides an unconditional jump from the `goto` to a labeled statement somewhere in the same function. A label is a valid identifier followed by a colon (`:`).

**Use Case:** Primarily seen in older code for error handling or breaking out of deeply nested loops. Its use is **highly discouraged** in modern C programming.

### Why Avoid `goto`?

- **Unstructured Control Flow**: It makes the code's logic difficult to follow, often leading to "spaghetti code."
- **Harder to Debug**: Tracing the program's execution path becomes a nightmare.
- **Alternatives Exist**: Nearly every problem that can be solved with `goto` can be solved more cleanly with `if`, `switch`, loops, and functions.

**Example from `main.c` (for demonstration only):**

```c
start: // This is a label
printf("   Your input: ");
scanf("%d", &input);

if (input == 0) {
    goto end; // Jump forward to the 'end' label
} else {
    goto start; // Jump backward to the 'start' label
}

end: // The destination label
printf("   Exited using goto.\n");
```

This creates a loop that can only be exited by entering `0`.
