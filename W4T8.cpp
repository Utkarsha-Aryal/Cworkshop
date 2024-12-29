#include <stdio.h>

// Define a structure for 2D points
typedef struct {
    float x;
    float y;
} Point;

// Function to calculate midpoint
Point calculateMidpoint(Point p1, Point p2) {
    Point midpoint;
    midpoint.x = (p1.x + p2.x) / 2;
    midpoint.y = (p1.y + p2.y) / 2;
    return midpoint;
}

int main() {
    Point p1, p2, midpoint;

    // Input points
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    // Calculate midpoint
    midpoint = calculateMidpoint(p1, p2);

    // Display midpoint
    printf("Midpoint: (%.2f, %.2f)\n", midpoint.x, midpoint.y);
    return 0;
}
