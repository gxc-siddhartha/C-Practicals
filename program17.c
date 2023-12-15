#include <stdio.h> 
#include <string.h>

int main() {
    
    char inpStr[100];
    printf("Enter a string: "); 
    fgets(inpStr, sizeof(inpStr), stdin);

    inpStr[strcspn(inpStr, "\n")] = '\0';
    
    printf("Original String: %s\n", inpStr);
    
    int length = strlen(inpStr);
    printf("Length of the String: %d\n", length);
    
    char copiedString[100];
    strcpy(copiedString, inpStr);
    printf("Copied String: %s\n", copiedString);

    char additionalString[100] = "Concatenated";
    strcat(copiedString, additionalString);
    printf("Concatenated String: %s\n", copiedString);

    return 0;
}
