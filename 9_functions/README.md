# 9. C Functions: Declarations and Definitions

Functions are self-contained blocks of code that perform a specific task. They are the building blocks of C programs, helping to make code modular, reusable, and easier to manage.

## Key Concepts

Every function has two main parts: a declaration and a definition.

### 1. Function Declaration (or Prototype)

A function declaration is a "heads-up" to the compiler. It introduces the function's name, its return type (the type of value it sends back), and the types of its parameters (the values it accepts). It ends with a semicolon.

**Why is it needed?** It allows you to use a function in your code (e.g., in `main()`) *before* you've provided the full implementation of that function. This is crucial for organizing code, especially in larger projects with multiple files.

**Syntax:**

```c
return_type function_name(parameter_type1, parameter_type2, ...);
```

**Example from `main.c`:**

```c
// Declaration for a function named 'add' that takes two integers
// and returns an integer.
int add(int a, int b);

// Declaration for a function that takes and returns nothing.
void printMessage(void);
```

### 2. Function Definition

The function definition is where you provide the actual code—the statements that are executed when the function is called. It consists of the function's header (which looks like the declaration, but without the semicolon) and its body (the code inside the curly braces `{}`).

**Syntax:**

```c
return_type function_name(parameter_type1 param_name1, ...) {
    // Body of the function (the code)
    return value; // if return_type is not void
}
```

**Example from `main.c`:**
This is the implementation of the `add` function.

```c
int add(int a, int b) {
    return a + b;
}
```

## How It Works in `main.c`

1. **Declarations First**: At the top of the file, we declare `add()` and `printMessage()`. This tells the compiler, "These functions exist somewhere, and here's what they look like."
2. **`main()` Can Call Them**: Because the compiler has seen the declarations, it knows `add()` is a valid function when it's called inside `main()`. It doesn't need to have seen the full definition yet.
3. **Definitions Later**: The actual implementations of the functions are provided after `main()`. The linker will connect the function calls in `main()` to these definitions when the program is compiled.

This separation allows for a clean, top-down reading style where the main logic is presented first, followed by the implementation details.
