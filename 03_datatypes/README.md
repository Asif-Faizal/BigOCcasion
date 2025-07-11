# 3. C Data Types

This section provides an overview of the fundamental data types in the C programming language. The sizes and ranges of these types can vary depending on the system architecture (e.g., 32-bit vs. 64-bit).

## Code Example

The following `main.c` program demonstrates how to declare, initialize, and print the values and sizes of various data types.

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integer types
    int integerVar = 2147483647;
    short shortVar = 32767;
    long longVar = 9223372036854775807L;
    long long longLongVar = 9223372036854775807LL;
    unsigned int unsignedIntVar = 4294967295U;

    // Floating-point types
    float floatVar = 3.14f;
    double doubleVar = 3.141592653589793;
    long double longDoubleVar = 3.141592653589793238L;

    // Character type
    char charVar = 'A';
    
    // Boolean type
    _Bool boolVar = true;

    // ... printing logic ...
}
```

## Data Types Explained

### Integer Types

Used to store whole numbers. Modifiers like `short`, `long`, `long long`, `signed`, and `unsigned` can be used to alter the storage size and range.

* `int`: The standard integer type.
* `short`: Used for smaller integer values.
* `long`: Used for larger integer values.
* `long long`: Used for very large integer values.
* `unsigned`: Can only store non-negative values, effectively doubling the positive range.

### Floating-Point Types

Used to store real numbers (numbers with a fractional part).

* `float`: Single-precision floating-point type.
* `double`: Double-precision floating-point type, offering more precision than `float`.
* `long double`: Extended-precision floating-point type, offering even more precision.

### Character Type

* `char`: Used to store a single character (like 'a', 'Z', or '?'). Internally, it is stored as an integer (its ASCII value). It is typically 1 byte in size.

### Boolean Type

* `_Bool`: Introduced in C99, this type is used to store boolean values (`true` or `false`). It requires including the `<stdbool.h>` header. `true` is equivalent to `1`, and `false` is equivalent to `0`.

## Summary Table

| Data Type | `printf` Specifier | Typical Size (bytes) | Typical Range |
|---|---|---|---|
| `char` | `%c` | 1 | -128 to 127 or 0 to 255 |
| `short` | `%hd` | 2 | -32,768 to 32,767 |
| `int` | `%d` | 4 | -2,147,483,648 to 2,147,483,647 |
| `long` | `%ld` | 8 | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `long long` | `%lld`| 8 | (Same as `long` on most 64-bit systems) |
| `unsigned int`| `%u` | 4 | 0 to 4,294,967,295 |
| `float` | `%f` | 4 | 1.2E-38 to 3.4E+38 |
| `double` | `%lf` | 8 | 2.3E-308 to 1.7E+308 |
| `long double`| `%Lf` | 16 | 3.4E-4932 to 1.1E+4932 |
| `_Bool` | `%d` | 1 | 0 or 1 |

### Here's a quick breakdown of why the output looks the way it does

Integers, Char, and Bool: The values and sizes you see for int, short, long, long long, char, and _Bool are all standard and match the code exactly.
Floating-Point Precision: The float, double, and long double values are printed with 6 digits of precision after the decimal point because that is the default behavior of the %f, %lf, and %Lf format specifiers in printf.
long double Size: You'll notice that long double has a size of 8 bytes, the same as double. While long double can sometimes be larger (e.g., 16 bytes on some Linux systems), on macOS (which you are using) it is common for it to have the same size and precision as a double. So, this is the correct and expected behavior for your specific environment.
