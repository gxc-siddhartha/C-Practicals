#include <stdio.h>

union EmployeeInfo {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    union EmployeeInfo employee;
    
    printf("Enter employee name: ");
    fgets(employee.name, sizeof(employee.name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &employee.employeeID);

    printf("Enter employee salary: ");
    scanf("%f", &employee.salary);

    
    printf("\nEmployee Information:\n");
    printf("Name: %s", employee.name);
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
