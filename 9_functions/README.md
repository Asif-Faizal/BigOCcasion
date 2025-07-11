# 9. C++ Functions: Declarations, Definitions, and Overloading

Functions are self-contained blocks of code that perform a specific task. They are the building blocks of C++ programs, helping to make code modular, reusable, and easier to manage.

## Key Concepts

### 1. Function Declaration (or Prototype)

A function declaration (or prototype) tells the compiler about a function's existence before it's actually defined. It specifies the function's name, return type, and the types of its parameters. This allows you to call a function before its implementation appears in the code.

**Syntax:**

```cpp
return_type function_name(parameter_type1, parameter_type2, ...);
```

**C++ vs. C Syntax:** In C++, a function with no parameters should be declared with empty parentheses `()`, not `(void)`.

**Example from `main.cpp`:**

```cpp
// Declaration for a function that takes two integers and returns an integer.
int add(int a, int b);

// Declaration for a function that takes no arguments.
void printMessage();
```

### 2. Function Definition

The function definition provides the actual implementation (the body) of the function.

**Syntax:**

```cpp
return_type function_name(parameter_type1 param_name1, ...) {
    // Body of the function (the code)
    return value; // if return_type is not void
}
```

**Example from `main.cpp`:**

```cpp
int add(int a, int b) {
    return a + b;
}
```

### 3. Function Overloading

A key feature of C++ is **function overloading**, which allows you to define multiple functions with the same name, as long as they have different parameter lists (either a different number of parameters or different types). The compiler automatically determines which version to call based on the arguments you provide.

**Example from `main.cpp`:** We have two versions of the `add` function.

```cpp
// Overloaded version of 'add' for doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    // The compiler knows to call the int version
    int int_sum = add(10, 25);
    
    // The compiler knows to call the double version
    double double_sum = add(5.5, 4.4);
}
```

This allows you to create a more intuitive interface, as you don't need different names (like `add_int` and `add_double`) for functions that perform the same logical operation on different data types.
