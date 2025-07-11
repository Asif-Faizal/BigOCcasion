# 3. C++ Fundamental Data Types

This section provides an overview of the fundamental data types in C++. The sizes of these types can vary depending on the system architecture (e.g., 32-bit vs. 64-bit), but the standard guarantees minimum sizes.

## Code Example

The `main.cpp` program demonstrates how to declare, initialize, and print the values and sizes of various data types using C++ streams.

```cpp
#include <iostream>
#include <iomanip> // For std::boolalpha

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
    bool boolVar = true; // Native bool type in C++

    // ... printing logic using std::cout ...
    std::cout << "int value: " << integerVar << ", size: " << sizeof(integerVar) << " bytes" << std::endl;
    // ... etc for all variables
    std::cout << "bool value: " << std::boolalpha << boolVar << ", size: " << sizeof(boolVar) << " byte" << std::endl;
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

* `char`: Used to store a single character (like 'a', 'Z', or '?'). It is typically 1 byte in size. C++ also has `wchar_t`, `char16_t`, and `char32_t` for wide characters.

### Boolean Type

* `bool`: A native C++ type to store boolean values (`true` or `false`). It's a significant improvement over C's `_Bool`. Using `std::boolalpha` with `std::cout` prints the words "true" or "false" instead of 1 or 0.

## Summary Table

| Data Type     | Typical Size (bytes) | Typical Range / Precision                               |
|---------------|----------------------|---------------------------------------------------------|
| `bool`        | 1                    | `true` or `false`                                       |
| `char`        | 1                    | -128 to 127 or 0 to 255                                 |
| `short`       | 2                    | -32,768 to 32,767                                       |
| `int`         | 4                    | -2,147,483,648 to 2,147,483,647                         |
| `long`        | 8                    | -9.2e18 to 9.2e18                                       |
| `long long`   | 8                    | -9.2e18 to 9.2e18                                       |
| `unsigned int`| 4                    | 0 to 4,294,967,295                                      |
| `float`       | 4                    | ~7 decimal digits of precision                          |
| `double`      | 8                    | ~15 decimal digits of precision                         |
| `long double` | 16 (often 8 on macOS/Win) | ~19 decimal digits of precision or more                  |

## Pseudocode

```xml
BEGIN
    DECLARE and INITIALIZE variables of different data types (int, float, char, bool, etc.)

    PRINT value and size for each variable.
END
```

## Flowchart

```mermaid
graph TD;
    A[Start] --> B[Declare & Initialize all variables<br>(integerVar, floatVar, charVar, boolVar, etc.)];
    B --> C[/Display value & size of integerVar/];
    C --> D[/Display value & size of shortVar/];
    D --> E[/...and so on for other variables.../];
    E --> F[/Display value & size of boolVar/];
    F --> G[End];
```
