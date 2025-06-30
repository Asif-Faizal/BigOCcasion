# 6. C Conditional Statements

Conditional statements allow a program to execute different blocks of code based on whether a certain condition is true or false. This is the primary way to introduce decision-making and logic into your programs.

## 1. The `if` Statement

The `if` statement executes a block of code only if the specified condition is true.

**Syntax:**

```c
if (condition) {
    // Code to execute if condition is true
}
```

**Example from `main.c`:**

```c
if (age >= 18) {
    printf("You are eligible to vote.\n");
}
```

## 2. The `if-else` Statement

This statement executes one block of code if the condition is true, and a different block if it is false.

**Syntax:**

```c
if (condition) {
    // Code for the true case
} else {
    // Code for the false case
}
```

**Example from `main.c`:**

```c
if (age % 2 == 0) {
    printf("Your age is an even number.\n");
} else {
    printf("Your age is an odd number.\n");
}
```

## 3. The `if-else if-else` Ladder

Used to decide among several alternatives. The conditions are evaluated from top to bottom. As soon as a true condition is found, the statement associated with it is executed, and the rest of the ladder is bypassed.

**Example from `main.c`:**

```c
if (age < 13) {
    printf("You are a child.\n");
} else if (age >= 13 && age < 18) {
    printf("You are a teenager.\n");
} else {
    printf("You are a senior citizen.\n");
}
```

## 4. Nested `if` Statements

You can have `if` statements inside other `if` statements. This is useful for testing a sub-condition.

**Example from `main.c`:**

```c
if (age >= 18) { // Outer if
    if (age < 21) { // Inner (nested) if
        printf("You are an adult, but not yet 21.\n");
    }
}
```

## 5. The `switch` Statement

The `switch` statement is an efficient alternative to a long `if-else if-else` ladder when you need to check a single variable against a list of constant integer or character values.

### Key `switch` Components

- `case`: Defines a block of code for a specific value.
- `break`: Exits the `switch` statement. If you omit `break`, execution will "fall through" to the next `case`.
- `default`: An optional case that runs if none of the other cases match.

**Example from `main.c`:**

```c
switch (dayOfWeek) {
    case 1:
        printf("It's Sunday.\n");
        break;
    case 2:
        printf("It's Monday.\n");
        break;
    // ... other cases ...
    default:
        printf("Invalid day number.\n");
        break;
}
```
