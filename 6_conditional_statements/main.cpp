#include <iostream>

int main() {
    int age;
    int dayOfWeek;

    std::cout << "--- Conditional Statements in C++ ---" << std::endl << std::endl;

    // --- 1. 'if' statement ---
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    }

    // --- 2. 'if-else' statement ---
    if (age % 2 == 0) {
        std::cout << "Your age is an even number." << std::endl << std::endl;
    } else {
        std::cout << "Your age is an odd number." << std::endl << std::endl;
    }

    // --- 3. 'if-else if-else' ladder ---
    // This provides different remarks based on age.
    if (age < 13) {
        std::cout << "You are a child." << std::endl;
    } else if (age >= 13 && age < 18) {
        std::cout << "You are a teenager." << std::endl;
    } else if (age >= 18 && age < 65) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a senior citizen." << std::endl;
    }
    
    // --- 4. Nested 'if' statement ---
    // Checks for a specific condition within another condition.
    if (age >= 18) {
        if (age < 21) {
            std::cout << "You are an adult, but not yet 21." << std::endl;
        }
    }

    // --- 5. 'switch' statement ---
    // A good alternative to a long if-else if ladder for checking a single variable.
    std::cout << "\nEnter a day number (1-7): ";
    std::cin >> dayOfWeek;

    switch (dayOfWeek) {
        case 1:
            std::cout << "It's Sunday." << std::endl;
            break; // 'break' exits the switch; without it, execution "falls through".
        case 2:
            std::cout << "It's Monday." << std::endl;
            break;
        case 3:
            std::cout << "It's Tuesday." << std::endl;
            break;
        case 4:
            std::cout << "It's Wednesday." << std::endl;
            break;
        case 5:
            std::cout << "It's Thursday." << std::endl;
            break;
        case 6:
            std::cout << "It's Friday." << std::endl;
            break;
        case 7:
            std::cout << "It's Saturday." << std::endl;
            break;
        default: // 'default' runs if no other case matches.
            std::cout << "Invalid day number." << std::endl;
            break;
    }
    
    // C++17 introduced 'if/switch with initializer', a useful feature for limiting variable scope.
    // Example: if (int x = doSomething(); x > 10) { ... }
    // 'x' only exists inside the if-else statement.

    return 0;
} 