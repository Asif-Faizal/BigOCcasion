# 5. C I/O (scanf, printf) and Comments

This section explains how to perform basic input and output operations in C using the `scanf` and `printf` functions, and how to properly use comments to make your code more readable.

## Comments

Comments are notes within the code that are ignored by the compiler. They are used to explain what the code does, making it easier for others (and yourself) to understand.

There are two types of comments in C:

1. **Single-line comments**: Start with `//`. Everything from `//` to the end of the line is a comment.

    ```c
    // This is a single-line comment.
    int x = 10;
    ```

2. **Multi-line comments**: Start with `/*` and end with `*/`. They can span multiple lines.

    ```c
    /*
      This is a multi-line comment.
      It can be used to write longer descriptions.
    */
    ```

## Output: `printf()`

The `printf()` function ("print formatted") is used to send formatted output to the screen.

- It can print simple strings: `printf("Hello!");`
- It can print the values of variables using format specifiers (`%d` for integers, `%f` for floats, `%c` for chars, `%s` for strings).

```c
int age = 25;
printf("My age is: %d\n", age); // The \n adds a newline
```

## Input: `scanf()`

The `scanf()` function is used to read formatted input from the user. It requires two things:

1. A format specifier to tell it what kind of data to expect.
2. The memory address of the variable where it should store the data. We use the ampersand `&` to get the address of a variable.

```c
int age;
printf("Enter your age: ");
scanf("%d", &age); // Reads an integer and stores it in the 'age' variable
```

### Important `scanf` Considerations

- **The `&` is crucial**: Forgetting the `&` is a common and serious error. The only common exception is when reading a string into a character array, as the array's name is already an address.
- **The newline issue**: `scanf` can leave a newline character `\n` in the input buffer after reading a number. This can cause the next `scanf` (especially for a character) to fail. A common fix is to put a space before the format specifier, like `scanf(" %c", &myChar);`, which consumes any leftover whitespace.

## Full Code Example from `main.c`

```c
#include <stdio.h>

int main() {
    // Variable declarations
    int age;
    float weight;
    char initial;
    char fullName[50]; 

    // Taking user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter your first initial: ");
    scanf(" %c", &initial);

    printf("Enter your full name: ");
    scanf("%s", fullName);

    // Displaying the collected data
    printf("\n--- Your Details ---\n");
    printf("Full Name: %s\n", fullName);
    printf("Initial: %c\n", initial);
    printf("Age: %d years old\n", age);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}
```

## Common `scanf` Pitfalls

The outputs you observed highlight two very common issues with `scanf`.

1. **Invalid Input**: If you provide input that doesn't match the format specifier (e.g., entering `w` for `%d`), `scanf` will fail and leave the invalid input in the buffer. This can cause a chain reaction of failures for subsequent `scanf` calls. Proper error handling (checking the return value of `scanf`) is needed for robust programs.

2. **`%s` Stops at Whitespace**: The `%s` specifier reads text until it finds the first whitespace character (like a space or newline). This makes it unsuitable for reading input that might contain spaces, such as a full name.

## A Better Alternative for Strings: `fgets`

To reliably read a full line of text (including spaces), the `fgets` function is a safer and more predictable choice.

```c
#include <string.h> // Required for strcspn

char fullName[50];
fgets(fullName, sizeof(fullName), stdin);

// fgets keeps the newline, so we can remove it
fullName[strcspn(fullName, "\n")] = 0;
```

- `fgets(buffer, size, stream)` reads a line from the `stream` (e.g., `stdin` for keyboard) and stores it in the `buffer`.
- It stops when it has read `size - 1` characters, or when it reads a newline `\n`.
- Unlike `scanf`, it's safe from buffer overflows and handles spaces correctly.

```c
#include <string.h>

char fullName[50];
fgets(fullName, sizeof(fullName), stdin);

// fgets keeps the newline, so we can remove it
fullName[strcspn(fullName, "\n")] = 0;
```
