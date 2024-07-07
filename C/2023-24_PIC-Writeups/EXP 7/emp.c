#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char dept[50];
    float salary;
} database[100];

int n = 0;

void addEmployee()
{
    if (n == 99) 
    {
        printf("DATABASE FULL!!");
        return;
    }

    int id;
    char name[50];
    char dept[50];
    float salary;

    printf("Employee ID: ");
    scanf("%d", &id);
    printf("Employee Name: ");
    scanf("%s", name);
    printf("Employee Dept: ");
    scanf("%s", dept);
    printf("Employee Salary: ");
    scanf("%f", &salary);

    database[n].id = id;
    strcpy(database[n].name, name);
    strcpy(database[n].dept, dept);
    database[n].salary = salary;
    n++;
    return;
}

int printEmployeeDetails(int id)
{
    if (id == -1)
    {
        printf("Enter ID: ");
        scanf("%d", &id);
    }

    for (int i = 0; i <= n; i++)
    {
        if (database[i].id == id)
        {
            printf("Employee ID: %d\n", database[i].id);
            printf("Employee Name: %s\n", database[i].name);
            printf("Employee Dept: %s\n", database[i].dept);
            printf("Employee Salary: %f\n", database[i].salary);
            return i;
        }
    }
    printf("NOT FOUND!!");
    return -1;
}

void updateEmployeeInfo()
{
    int i = printEmployeeDetails(-1);

    if (i == -1) return;

    char choice;

    while (1)
    {
        printf("What would you like to edit? Name (n) / Dept (d) / Salary (s) / Exit (x): ");
        scanf("%s", &choice);
        switch (choice)
        {
            case 'n':
                printf("Employee Name: ");
                scanf("%s", &database[i].name);
                break;
            case 'd':
                printf("Employee Dept: ");
                scanf("%s", database[i].dept);
                break;
            case 's':
                printf("Employee Salary: ");
                scanf("%f", &database[i].salary);
                break;
            case 'x':
                printEmployeeDetails(database[i].id);
                return;
            default:
                printf("Please enter valid choice!");
        }
    }
}

void main()
{
    int choice;
    printf("Welcome to DB mananger!\n");

    while(1)
    {
        printf("What would you like to do today?\n1 - Add Employee\n2 - Print Employee Details\n3 - Update Employee Details\n4 - Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                addEmployee();
                break;
            case 2:
                printEmployeeDetails(-1);
                break;
            case 3:
                updateEmployeeInfo();
                break;
            case 4:
                printf("Thank you!");
                return;
            default:
                printf("Enter a valid choice!");
        }
    }
}