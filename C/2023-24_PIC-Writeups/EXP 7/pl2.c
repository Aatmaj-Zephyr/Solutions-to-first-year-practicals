#include <stdio.h>

union EmployeeInfo {
    char name[50];
    int id;
    float years_of_experience;
};

int main() {
    union EmployeeInfo employee;

    printf("Enter employee name: ");
    scanf("%s", employee.name);

    printf("Enter employee ID: ");
    scanf("%d", &employee.id);

    printf("Enter years of experience: ");
    scanf("%f", &employee.years_of_experience);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee.name);
    printf("ID: %d\n", employee.id);
    printf("Years of Experience: %.2f\n", employee.years_of_experience);

    return 0;
}
