#include <iostream>
#include <vector> // Used for the range-based for loop example

int main() {
    std::cout << "--- Looping Statements in C++ ---" << std::endl << std::endl;

    // --- 1. 'for' loop ---
    // The for loop is ideal when you know in advance how many times you want to loop.
    std::cout << "1. 'for' loop counting from 1 to 5:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        // (initialization; condition; increment)
        std::cout << "   i = " << i << std::endl;
    }
    std::cout << std::endl;


    // --- 2. 'while' loop ---
    // The while loop is used when the number of iterations is not known beforehand.
    // It continues as long as the condition is true.
    std::cout << "2. 'while' loop counting down from 3:" << std::endl;
    int j = 3;
    while (j > 0) {
        std::cout << "   j = " << j << std::endl;
        j--; // Decrement the counter
    }
    std::cout << std::endl;


    // --- 3. 'do-while' loop ---
    // The do-while loop is similar to a while loop, but it guarantees
    // that the loop body will be executed at least once.
    std::cout << "3. 'do-while' loop example:" << std::endl;
    int k = 5; // Start with a value that makes the 'while' condition false
    do {
        std::cout << "   This runs at least once. k = " << k << std::endl;
        k++;
    } while (k < 3); // The condition is checked *after* the loop body.
    std::cout << std::endl;


    // --- 4. C++ Range-based 'for' loop (C++11 and later) ---
    // This is a very common and convenient way to iterate over a collection.
    std::cout << "4. Range-based 'for' loop:" << std::endl;
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    for (int number : numbers) {
        std::cout << "   Value: " << number << std::endl;
    }
    std::cout << std::endl;


    // --- 5. Loop control with 'break' and 'continue' ---
    std::cout << "5. Loop with 'break' and 'continue':" << std::endl;
    for (int num = 1; num <= 10; num++) {
        if (num % 2 == 0) {
            // If the number is even, skip the rest of this iteration
            continue;
        }
        if (num > 7) {
            // If the number is greater than 7, exit the loop entirely
            break;
        }
        std::cout << "   Processed odd number: " << num << std::endl;
    }
    std::cout << std::endl;

    // --- 6. Nested while loop for user input ---
    std::cout << "6. Nested 'while' loop for menu simulation:" << std::endl;
    char choice = ' ';
    while (choice != 'q') {
        std::cout << "   Enter 'c' to continue, 'q' to quit: ";
        std::cin >> choice;

        if (choice == 'c') {
            std::cout << "   --> Continuing..." << std::endl;
        } else if (choice == 'q') {
            std::cout << "   --> Quitting." << std::endl;
        } else {
            std::cout << "   --> Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
} 