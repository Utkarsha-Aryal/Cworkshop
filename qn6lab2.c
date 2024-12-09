#include <stdio.h>

// Function to solve simultaneous equations
void equations(double a, double b, double c, double d, double e, double f) {
    double determinant = a * e - b * d;

    if (determinant == 0) {
        printf("The equations are either parallel or coincident, no unique solution exists.\n");
        return;
    }

    // Calculate x and y
    double x = (c * e - b * f) / determinant;
    double y = (a * f - c * d) / determinant;

    printf("The solution is: x = %.2f, y = %.2f\n", x, y);
}

int main() {
    double a, b, c, d, e, f;

    // Input coefficients
    printf("Enter coefficients for equation 1 (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Enter coefficients for equation 2 (d, e, f): ");
    scanf("%lf %lf %lf", &d, &e, &f);

    // Call the function
    equations(a, b, c, d, e, f);

    return 0;
}
