#include <stdio.h>

int main() {
    int age;
    int dayOfWeek;

    printf("--- Conditional Statements in C ---\n\n");

    // --- 1. 'if' statement ---
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }

    // --- 2. 'if-else' statement ---
    if (age % 2 == 0) {
        printf("Your age is an even number.\n\n");
    } else {
        printf("Your age is an odd number.\n\n");
    }

    // --- 3. 'if-else if-else' ladder ---
    // This provides different remarks based on age.
    if (age < 13) {
        printf("You are a child.\n");
    } else if (age >= 13 && age < 18) {
        printf("You are a teenager.\n");
    } else if (age >= 18 && age < 65) {
        printf("You are an adult.\n");
    } else {
        printf("You are a senior citizen.\n");
    }
    
    // --- 4. Nested 'if' statement ---
    // Checks for a specific condition within another condition.
    if (age >= 18) {
        if (age < 21) {
            printf("You are an adult, but not yet 21.\n");
        }
    }

    // --- 5. 'switch' statement ---
    // A good alternative to a long if-else if ladder for checking a single variable.
    printf("\nEnter a day number (1-7): ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek) {
        case 1:
            printf("It's Sunday.\n");
            break; // 'break' exits the switch; without it, execution "falls through".
        case 2:
            printf("It's Monday.\n");
            break;
        case 3:
            printf("It's Tuesday.\n");
            break;
        case 4:
            printf("It's Wednesday.\n");
            break;
        case 5:
            printf("It's Thursday.\n");
            break;
        case 6:
            printf("It's Friday.\n");
            break;
        case 7:
            printf("It's Saturday.\n");
            break;
        default: // 'default' runs if no other case matches.
            printf("Invalid day number.\n");
            break;
    }

    return 0;
} 