#include <stdio.h>
#include <string.h>

/*
  This is a multi-line comment.
  This program demonstrates the use of comments, printf, and scanf
  to interact with the user.
*/

int main() {
    // --- DEMONSTRATING COMMENTS, PRINTF & SCANF ---

    // Variable declarations
    int age;
    float weight;
    char initial;
    char fullName[50]; // A string is an array of characters

    // --- Using printf to prompt the user ---
    printf("--- User Input Example ---\n\n");
    printf("Please enter your details below.\n");

    // --- Taking INTEGER input ---
    printf("Enter your age: ");
    scanf("%d", &age);

    // --- Taking FLOAT input ---
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    // --- Taking CHAR input ---
    // We add a space before %c to consume any leftover newline/whitespace characters
    // from the previous scanf, which is a common issue.
    printf("Enter your first initial: ");
    scanf(" %c", &initial);

    // --- Taking STRING input ---
    printf("Enter your full name: ");
    // Clear the input buffer before using fgets
    while ((getchar()) != '\n'); 
    // Using fgets to read a full line, including spaces
    fgets(fullName, sizeof(fullName), stdin);

    // fgets might include the newline character, so let's remove it
    // (This is an advanced topic, but good practice)
    fullName[strcspn(fullName, "\n")] = 0;


    // --- Using printf to display the collected data ---
    printf("\n--- Your Details ---\n");
    printf("Full Name: %s\n", fullName);
    printf("Initial: %c\n", initial);
    printf("Age: %d years old\n", age);
    printf("Weight: %.2f kg\n", weight); // Printing float with 2 decimal places

    return 0; // End of the program
} 