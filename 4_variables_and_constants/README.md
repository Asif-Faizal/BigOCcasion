# 4. C Variables and Constants

This section covers the fundamentals of variables and constants in C, with practical examples found in the `main.c` file.

## Variables

A variable is a name given to a storage area that our programs can manipulate. Each variable in C has a specific type, which determines the size and layout of the variable's memory.

### Key Concepts Illustrated in `main.c`

1. **Declaration and Initialization**:
    A variable is declared to specify its name and type. It can be initialized at the time of declaration.

    ```c
    int score = 95;
    float temperature = 25.5f;
    char grade = 'A';
    ```

2. **Changing Variable Values**:
    The value of a variable can be changed anytime during program execution.

    ```c
    score = 100; // The value of score is now updated
    ```

3. **Scope**:
    The code demonstrates a `globalVar`, which is declared outside any function and can be accessed or modified anywhere in the program. In contrast, variables declared inside `main()` (like `score`) are local to that function.

## Constants

A constant is an entity that refers to a fixed value; its value cannot be altered during the program's execution.

In C, there are two primary ways to define constants:

### 1. The `const` Keyword

This creates a read-only variable. The compiler will ensure that the value of a `const` variable is not modified.

```c
const int SIDES_OF_SQUARE = 4;
const float GST_RATE = 0.18f;

// The following line would cause a compilation error:
// SIDES_OF_SQUARE = 5;
```

### 2. The `#define` Preprocessor Directive

This is a preprocessor macro that replaces every occurrence of the identifier with the defined literal value before compilation even begins.

```c
#define PI 3.14159

printf("The value of PI is: %f\n", PI);
```

### `const` vs. `#define`

| Feature | `const` | `#define` |
|---|---|---|
| **Type** | Is a type-checked variable. | Is a simple text substitution; no type checking. |
| **Scope** | Obeys standard scoping rules (can be global or local). | Has no scope; substitution happens everywhere after its definition. |
| **Debugging**| Appears in the debugger with its name. | The debugger only sees the literal value (e.g., `3.14159`), not `PI`. |
| **Memory** | Is stored in memory like a regular variable. | Does not use variable memory; the value is burned into the code. |
