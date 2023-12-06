#include <stdio.h> 
#include <string.h>

int main() {
    // Declare and initialize a string
    char inpStr[100];
    printf("Enter a string: "); 
    fgets(inpStr, sizeof(inpStr), stdin);

    // Remove trailing newline character
    inpStr[strcspn(inpStr, "\n")] = '\0';

    // Display the original string
    printf("Original String: %s\n", inpStr);

    // Calculate the length of the string
    int length = strlen(inpStr);
    printf("Length of the String: %d\n", length);

    // Copy the string to a new variable
    char copiedString[100];
    strcpy(copiedString, inpStr);
    printf("Copied String: %s\n", copiedString);

    // Concatenate two strings
    char additionalString[100] = "Concatenated";
    strcat(copiedString, additionalString);
    printf("Concatenated String: %s\n", copiedString);

    return 0;
}
