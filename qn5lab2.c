#include <stdio.h>
#include <math.h>

// Function to calculate the missing variable in v = u + at
double velocityCalc(double v, double u, double a, double t) {
    int nanCount = 0;

    // Count the number of NAN inputs
    if (isnan(v)) nanCount++;
    if (isnan(u)) nanCount++;
    if (isnan(a)) nanCount++;
    if (isnan(t)) nanCount++;

    // Ensure only one variable is NAN
    if (nanCount != 1) {
        printf("Error: Exactly one variable must be NAN.\n");
        return NAN;
    }

    // Compute the missing variable
    if (isnan(v)) return u + a * t;         // Compute v
    if (isnan(u)) return v - a * t;         // Compute u
    if (isnan(a)) return (v - u) / t;       // Compute a
    if (isnan(t)) return (v - u) / a;       // Compute t

    return NAN; // Fallback
}

int main() {
    double v, u, a, t;

    // Input values
    printf("Enter the value for v (use NAN for missing value): ");
    scanf("%lf", &v);
    printf("Enter the value for u (use NAN for missing value): ");
    scanf("%lf", &u);
    printf("Enter the value for a (use NAN for missing value): ");
    scanf("%lf", &a);
    printf("Enter the value for t (use NAN for missing value): ");
    scanf("%lf", &t);

    // Call the function
    double result = velocityCalc(v, u, a, t);

    if (!isnan(result)) {
        printf("The missing value is: %.2f\n", result);
    }

    return 0;
}
