#include <stdio.h>

#define STUDENT_COUNT 10

// Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to read student data
void readStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to display student data
void displayStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\nRoll: %d\nMarks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
}

int main() {
    struct Student students[STUDENT_COUNT];
    readStudents(students, STUDENT_COUNT);
    displayStudents(students, STUDENT_COUNT);
    return 0;
}
