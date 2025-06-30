# 7. C Looping Statements

Loops are used to execute a block of code repeatedly as long as a certain condition is met. They are fundamental for automating repetitive tasks.

## 1. The `for` Loop

The `for` loop is ideal when you know how many times you want the loop to run. It consists of three parts: initialization, condition, and update (increment/decrement).

**Syntax:**

```c
for (initialization; condition; update) {
    // Code to execute
}
```

**Example:** This loop runs 5 times.

```c
for (int i = 1; i <= 5; i++) {
    printf("   i = %d\n", i);
}
```

## 2. The `while` Loop

The `while` loop repeatedly executes a block of code as long as a given condition remains true. It is an "entry-controlled" loop, meaning the condition is checked *before* the loop body is executed.

**Syntax:**

```c
while (condition) {
    // Code to execute
    // (must include something that can change the condition)
}
```

**Example:**

```c
int j = 3;
while (j > 0) {
    printf("   j = %d\n", j);
    j--;
}
```

## 3. The `do-while` Loop

The `do-while` loop is an "exit-controlled" loop. It is similar to the `while` loop, but the condition is checked *after* the loop body is executed. This guarantees that the loop will run at least once.

**Syntax:**

```c
do {
    // Code to execute
} while (condition);
```

**Example:** This loop runs once, even though the condition `k < 3` is initially false.

```c
int k = 5;
do {
    printf("   This runs at least once. k = %d\n", k);
} while (k < 3);
```

## 4. Nested Loops

You can place one loop inside another. This is called a nested loop and is commonly used for tasks like iterating through a 2D grid or printing patterns.

**Example:** The outer loop controls the rows, and the inner loop controls the columns.

```c
for (int row = 1; row <= 3; row++) {
    for (int col = 1; col <= 3; col++) {
        printf("   (row %d, col %d)\n", row, col);
    }
}
```

## 5. Loop Control Statements

You can change a loop's execution from its normal sequence using control statements.

- **`break`**: Immediately terminates the innermost loop it is in. Execution resumes at the statement following the loop.
- **`continue`**: Skips the rest of the current iteration and proceeds to the next iteration of the loop.

**Example:** This loop processes only odd numbers and stops completely once a number greater than 7 is reached.

```c
for (int num = 1; num <= 10; num++) {
    if (num % 2 == 0) {
        continue; // Skip even numbers
    }
    if (num > 7) {
        break; // Exit the loop
    }
    printf("   Processed odd number: %d\n", num);
}
```

---

## `for` vs. `while` vs. `do-while`

| Feature | `for` Loop | `while` Loop | `do-while` Loop |
| :--- | :--- | :--- | :--- |
| **Primary Use Case** | When the number of iterations is known beforehand. | When the loop depends on a condition not based on a simple counter. | When the loop body **must** be executed at least once. |
| **Structure** | Combines initialization, condition, and update in one line. | Separates initialization, condition, and update. | Separates initialization, condition, and update. |
| **Condition Check**| At the **beginning** of each iteration (Entry-Controlled). | At the **beginning** of each iteration (Entry-Controlled). | At the **end** of each iteration (Exit-Controlled). |
| **Guaranteed Execution?** | No. If the condition is initially false, it never runs. | No. If the condition is initially false, it never runs. | Yes. Always runs at least once. |

## Nesting `while` and `do-while` Loops

Nesting is not specific to `for` loops. You can nest any loop inside any other loop. The choice depends on the logic you need. For example, you might use a nested `while` loop to handle user input for a menu until they make a valid choice, all within a larger game loop.

**Nested `while` Loop Example:**

```c
// Pseudocode for a simple game menu
while (gameIsRunning) {
    char menuChoice = ' ';
    while (menuChoice != 'p' && menuChoice != 'q') {
        // Inner loop keeps asking until input is valid
        printf("Enter 'p' to play or 'q' to quit: ");
        scanf(" %c", &menuChoice);
    }

    if (menuChoice == 'p') {
        // ... play the game ...
    } else {
        gameIsRunning = false; // Exit the outer loop
    }
}
```
