#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num, remainder, sum = 0, digits = 0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate the sum of the power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    return (sum == num); // Returns 1 if Armstrong, else 0
}

// Function to check if a number is a Perfect number
int isPerfect(int num) {
    int sum = 0;

    // Find all divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num); // Returns 1 if Perfect, else 0
}

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is Armstrong
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Check if the number is Perfect
    if (isPerfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}
