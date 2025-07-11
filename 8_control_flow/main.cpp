#include <iostream>

int main() {
    std::cout << "--- Demonstrating break, continue, and goto (C++ edition) ---" << std::endl << std::endl;

    // --- 1. 'break' statement ---
    // The 'break' statement is used to terminate a loop (for, while, or do-while)
    // or a switch statement prematurely. Its usage is identical in C++.
    std::cout << "1. 'break' statement example:" << std::endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "   Breaking the loop at i = 5" << std::endl;
            break; // The loop stops here
        }
        std::cout << "   i = " << i << std::endl;
    }
    std::cout << std::endl;


    // --- 2. 'continue' statement ---
    // The 'continue' statement skips the remaining code inside the current
    // iteration of a loop and proceeds to the next iteration. Its usage is identical in C++.
    std::cout << "2. 'continue' statement example (skipping even numbers):" << std::endl;
    for (int j = 1; j <= 10; j++) {
        if (j % 2 == 0) {
            continue; // Skip the cout for this iteration
        }
        std::cout << "   j = " << j << std::endl;
    }
    std::cout << std::endl;


    // --- 3. Replacing 'goto' with a proper loop ---
    // The 'goto' statement is highly discouraged in C++ as it makes code
    // unstructured, hard to read, and difficult to maintain.
    // The original C example's logic can be rewritten cleanly with a loop.
    std::cout << "3. Replacing 'goto' with a 'do-while' loop:" << std::endl;
    int input;
    
    do {
        std::cout << "   Enter a number. Enter 0 to exit." << std::endl;
        std::cout << "   Your input: ";
        std::cin >> input;

        if (input != 0) {
            std::cout << "   You entered " << input << ". Try again." << std::endl;
        }
    } while (input != 0); // The loop continues as long as input is not 0.

    std::cout << "   Exited the loop cleanly." << std::endl;

    return 0;
} 