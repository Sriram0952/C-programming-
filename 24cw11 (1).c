#include <stdio.h>

// Function to add two numbers and return the result
int add_numbers(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    int num1, num2, sum;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the add_numbers function and store the result in the sum variable
    sum = add_numbers(num1, num2);

    // Print the result to the console
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
