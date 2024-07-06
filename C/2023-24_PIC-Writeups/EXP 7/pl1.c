#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int roll_number;
    float percentage;
} Student;

int main() {
    Student students[MAX_STUDENTS], temp;
    int num_students;

    printf("Enter the number of students (max 10): ");
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    for (int i = 0; i < num_students - 1; ++i) {
        for (int j = 0; j < num_students - i - 1; ++j) {
            if (students[j].percentage < students[j + 1].percentage) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\nStudent Details (Descending Order of Percentage):\n");
    printf("Roll Number\tName\t\tPercentage\n");
    for (int i = 0; i < num_students; ++i) {
        printf("%d\t\t%s\t\t%.2f%%\n", students[i].roll_number, students[i].name, students[i].percentage);
    }

    return 0;
}
