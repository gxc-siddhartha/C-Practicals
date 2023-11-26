#include <stdio.h> #include <string.h>

int main() {
    // Declare and initialize a string
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove trailing newline character
    inputString[strcspn(inputString, "\n")] = '\0';

    // Display the original string
    printf("Original String: %s\n", inputString);

    // Calculate the length of the string
    int length = strlen(inputString);
    printf("Length of the String: %d\n", length);

    // Copy the string to a new variable
    char copiedString[100];
    strcpy(copiedString, inputString);
    printf("Copied String: %s\n", copiedString);

    // Concatenate two strings
    char additionalString[100] = "Concatenated";
    strcat(copiedString, additionalString);
    printf("Concatenated String: %s\n", copiedString);

    return 0;
}
