# 1. Hello World in C++

This project is a simple "Hello, World!" program written in the C++ programming language.

## Code Explanation

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

* `#include <iostream>`: This line includes the input/output stream library, which provides objects like `std::cout` for screen output.
* `int main()`: This is the main function where program execution begins.
* `std::cout << "Hello, World!" << std::endl;`: This line uses the `std::cout` object to send the string "Hello, World!" to the console. The `<<` operator is the stream insertion operator. `std::endl` inserts a newline character and flushes the stream.
* `return 0;`: This line indicates that the program has executed successfully.

## Pseudocode

```xml
BEGIN
    PRINT "Hello, World!"
END
```

## Flowchart

```mermaid
graph TD;
    A[Start] --> B[Display "Hello, World!"];
    B --> C[End];
```
