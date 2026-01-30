#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
    float grade;
};

void printStudentDetails(struct Student s) {
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Grade: %.2f\n", s.grade);
    printf("\n");
}

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Grade: ");
        scanf("%f", &students[i].grade);
        printf("\n");
    }

    printf("Student Details:\n");
    for (i = 0; i < 5; i++) {
        printStudentDetails(students[i]);
    }

    return 0;
}