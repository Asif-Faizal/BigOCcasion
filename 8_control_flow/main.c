#include <stdio.h>

int main() {
    printf("--- Demonstrating break, continue, and goto ---\n\n");

    // --- 1. 'break' statement ---
    // The 'break' statement is used to terminate a loop (for, while, or do-while)
    // or a switch statement prematurely.
    printf("1. 'break' statement example:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("   Breaking the loop at i = 5\n");
            break; // The loop stops here
        }
        printf("   i = %d\n", i);
    }
    printf("\n");


    // --- 2. 'continue' statement ---
    // The 'continue' statement skips the remaining code inside the current
    // iteration of a loop and proceeds to the next iteration.
    printf("2. 'continue' statement example (skipping even numbers):\n");
    for (int j = 1; j <= 10; j++) {
        if (j % 2 == 0) {
            continue; // Skip the printf for this iteration
        }
        printf("   j = %d\n", j);
    }
    printf("\n");


    // --- 3. 'goto' statement ---
    // The 'goto' statement provides an unconditional jump from the 'goto'
    // to a labeled statement in the same function.
    // NOTE: The use of 'goto' is highly discouraged in C as it makes
    // program flow difficult to trace. It is shown here for completeness.
    printf("3. 'goto' statement example:\n");
    int input;
    printf("   Enter a number. Enter 0 to exit with goto.\n");
    
    start: // This is a label
    printf("   Your input: ");
    scanf("%d", &input);

    if (input == 0) {
        goto end; // Jump to the 'end' label
    } else {
        printf("   You entered %d. Try again.\n", input);
        goto start; // Jump back to the 'start' label
    }

    // This part of the code is skipped by the goto jumps
    printf("   This line is never printed.\n");

    end: // The destination label for the exit jump
    printf("   Exited using goto.\n");

    return 0;
} 