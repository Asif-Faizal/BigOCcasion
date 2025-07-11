# 6. C++ Conditional Statements

Conditional statements allow a program to execute different blocks of code based on whether a certain condition is true or false. This is the primary way to introduce decision-making and logic into your programs. The syntax for these statements is largely identical to C.

## 1. The `if` Statement

The `if` statement executes a block of code only if the specified condition is true.

**Syntax:**

```cpp
if (condition) {
    // Code to execute if condition is true
}
```

**Example from `main.cpp`:**

```cpp
if (age >= 18) {
    std::cout << "You are eligible to vote." << std::endl;
}
```

## 2. The `if-else` Statement

This statement executes one block of code if the condition is true, and a different block if it is false.

**Syntax:**

```cpp
if (condition) {
    // Code for the true case
} else {
    // Code for the false case
}
```

**Example from `main.cpp`:**

```cpp
if (age % 2 == 0) {
    std::cout << "Your age is an even number." << std::endl;
} else {
    std::cout << "Your age is an odd number." << std::endl;
}
```

## 3. The `if-else if-else` Ladder

Used to decide among several alternatives. The conditions are evaluated from top to bottom. As soon as a true condition is found, the statement associated with it is executed, and the rest of the ladder is bypassed.

**Example from `main.cpp`:**

```cpp
if (age < 13) {
    std::cout << "You are a child." << std::endl;
} else if (age >= 13 && age < 18) {
    std::cout << "You are a teenager." << std::endl;
} else {
    std::cout << "You are a senior citizen." << std::endl;
}
```

## 4. Nested `if` Statements

You can have `if` statements inside other `if` statements. This is useful for testing a sub-condition.

**Example from `main.cpp`:**

```cpp
if (age >= 18) { // Outer if
    if (age < 21) { // Inner (nested) if
        std::cout << "You are an adult, but not yet 21." << std::endl;
    }
}
```

## 5. The `switch` Statement

The `switch` statement is an efficient alternative to a long `if-else if-else` ladder when you need to check a single variable against a list of constant integral or enumeration values.

### Key `switch` Components

- `case`: Defines a block of code for a specific value.
- `break`: Exits the `switch` statement. If you omit `break`, execution will "fall through" to the next `case`.
- `default`: An optional case that runs if none of the other cases match.
- **C++17 Feature**: C++17 introduced `switch with initializer`, which lets you declare and initialize a variable within the scope of the switch statement itself.

**Example from `main.cpp`:**

```cpp
switch (dayOfWeek) {
    case 1:
        std::cout << "It's Sunday." << std::endl;
        break;
    case 2:
        std::cout << "It's Monday." << std::endl;
        break;
    // ... other cases ...
    default:
        std::cout << "Invalid day number." << std::endl;
        break;
}
```

## 6. `if` with Initializer (C++17)

C++17 introduced the ability to declare and initialize a variable within an `if` statement. This is useful for improving code clarity and limiting the scope of variables.

**Syntax:**

```cpp
if (init-statement; condition) {
    // ...
}
```

**Example:**

```cpp
#include <map>
#include <string>

std::map<int, std::string> errorMap = {{1, "Not found"}, {2, "No access"}};

// The 'it' variable only exists within the scope of this if-else statement.
if (auto it = errorMap.find(1); it != errorMap.end()) {
    std::cout << "Error found: " << it->second << std::endl;
} else {
    std::cout << "No error." << std::endl;
}
```

## Pseudocode

```xml
BEGIN
    PROMPT for user's age and a day of the week number

    // Simple if
    IF age >= 18 THEN PRINT "You are eligible to vote."

    // if-else
    IF age is even THEN PRINT "age is even"
    ELSE PRINT "age is odd"

    // if-else if-else
    IF age < 13 THEN PRINT "You are a child."
    ELSE IF age < 18 THEN PRINT "You are a teenager."
    ELSE IF age < 65 THEN PRINT "You are an adult."
    ELSE PRINT "You are a senior citizen."

    // Nested if
    IF age >= 18 THEN
        IF age < 21 THEN PRINT "You are an adult, but not yet 21."
    END IF

    // Switch
    CASE dayOfWeek
        1: PRINT "It's Sunday."
        2: PRINT "It's Monday."
        ...
        7: PRINT "It's Saturday."
        DEFAULT: PRINT "Invalid day number."
    END CASE
END
```

## Flowchart

```mermaid
graph TD;
    A[Start] --> B[/Get age and dayOfWeek/];
    B --> C{age >= 18?};
    C -- True --> D{Display "Eligible to vote"};
    C -- False --> E[Continue];
    D --> E;
    
    E --> F{age % 2 == 0?};
    F -- True --> G{Display "age is even"};
    F -- False --> H{Display "age is odd"};
    G --> I[Continue];
    H --> I;

    I --> J{age < 13?};
    J -- True --> K{Display "Child"};
    J -- False --> L{age < 18?};
    L -- True --> M{Display "Teenager"};
    L -- False --> N{age < 65?};
    N -- True --> O{Display "Adult"};
    N -- False --> P{Display "Senior"};
    K --> Q[Continue];
    M --> Q;
    O --> Q;
    P --> Q;

    Q --> R{dayOfWeek?};
    R -- 1 --> S{Display "Sunday"};
    R -- 2 --> T{Display "Monday"};
    R -- ... --> U[...]
    R -- Default --> V{Display "Invalid"};
    S --> W[End];
    T --> W;
    U --> W;
    V --> W;
```
