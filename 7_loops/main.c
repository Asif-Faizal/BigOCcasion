#include <stdio.h>

int main() {
    printf("--- Looping Statements in C ---\n\n");

    // --- 1. 'for' loop ---
    // The for loop is ideal when you know in advance how many times you want to loop.
    printf("1. 'for' loop counting from 1 to 5:\n");
    for (int i = 1; i <= 5; i++) {
        // (initialization; condition; increment)
        printf("   i = %d\n", i);
    }
    printf("\n");


    // --- 2. 'while' loop ---
    // The while loop is used when the number of iterations is not known beforehand.
    // It continues as long as the condition is true.
    printf("2. 'while' loop counting down from 3:\n");
    int j = 3;
    while (j > 0) {
        printf("   j = %d\n", j);
        j--; // Decrement the counter
    }
    printf("\n");


    // --- 3. 'do-while' loop ---
    // The do-while loop is similar to a while loop, but it guarantees
    // that the loop body will be executed at least once.
    printf("3. 'do-while' loop example:\n");
    int k = 5; // Start with a value that makes the 'while' condition false
    do {
        printf("   This runs at least once. k = %d\n", k);
        k++;
    } while (k < 3); // The condition is checked *after* the loop body.
    printf("\n");


    // --- 4. Nested loops ---
    // You can have loops inside other loops. This is common for working with 2D data.
    printf("4. Nested 'for' loops (3x3 grid):\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("   (row %d, col %d)\n", row, col);
        }
    }
    printf("\n");


    // --- 5. Loop control with 'break' and 'continue' ---
    printf("5. Loop with 'break' and 'continue':\n");
    for (int num = 1; num <= 10; num++) {
        if (num % 2 == 0) {
            // If the number is even, skip the rest of this iteration
            continue;
        }
        if (num > 7) {
            // If the number is greater than 7, exit the loop entirely
            break;
        }
        printf("   Processed odd number: %d\n", num);
    }
    printf("\n");

    // --- 6. Nested while loop for user input ---
    printf("6. Nested 'while' loop for menu simulation:\n");
    char choice = ' ';
    while (choice != 'q') {
        printf("   Enter 'c' to continue, 'q' to quit: ");
        scanf(" %c", &choice);

        if (choice == 'c') {
            printf("   --> Continuing...\n");
        } else if (choice == 'q') {
            printf("   --> Quitting.\n");
        } else {
            printf("   --> Invalid choice. Please try again.\n");
        }
    }

    return 0;
} 