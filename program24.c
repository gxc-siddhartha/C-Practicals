#include <stdio.h>

// Define a union for storing employee information
union EmployeeInfo {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    // Declare a variable of the EmployeeInfo union
    union EmployeeInfo employee;

    // Input: Prompt the user to enter employee information
    printf("Enter employee name: ");
    fgets(employee.name, sizeof(employee.name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &employee.employeeID);

    printf("Enter employee salary: ");
    scanf("%f", &employee.salary);

    // Output: Display employee information
    printf("\nEmployee Information:\n");
    printf("Name: %s", employee.name);
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
