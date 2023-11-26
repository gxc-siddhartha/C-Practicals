#include <stdio.h>

// Define a structure for storing student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare a variable of the Student structure
    struct Student student;

    // Input: Prompt the user to enter student information
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Output: Display student information
    printf("\nStudent Information:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
