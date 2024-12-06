
#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Process each digit and calculate the sum
    while (number != 0) {
        digit = number % 10;   // Extract the last digit
        sum += digit;          // Add the digit to the sum
        number /= 10; 
		printf("%d",number) ;        // Remove the last digit
    }

    // Print the result
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

