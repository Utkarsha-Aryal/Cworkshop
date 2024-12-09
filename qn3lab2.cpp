#include <stdio.h>

// Function to calculate and print the midpoint of a line
void findMidpoint(float x1, float y1, float x2, float y2) {
    float midX = (x1 + x2) / 2.0;
    float midY = (y1 + y2) / 2.0;
    printf("The midpoint of the line is: (%.2f, %.2f)\n", midX, midY);
}

int main() {
    float x1, y1, x2, y2;

    // Input coordinates of the line
    printf("Enter the x-coordinate of the first point: ");
    scanf("%f", &x1);
    printf("Enter the y-coordinate of the first point: ");
    scanf("%f", &y1);
    printf("Enter the x-coordinate of the second point: ");
    scanf("%f", &x2);
    printf("Enter the y-coordinate of the second point: ");
    scanf("%f", &y2);

    // Call the function to find and print the midpoint
    findMidpoint(x1, y1, x2, y2);

    return 0;
}
