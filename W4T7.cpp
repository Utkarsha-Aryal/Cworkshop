#include <stdio.h>

// Define the structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student student = {1, "Alice", 85.5};
    struct Student *ptr = &student;

    // Access members using pointer
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", ptr->roll, ptr->name, ptr->marks);
    return 0;
}
