#include <stdio.h>

// Function to add two numbers
void add_numbers() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);
}

int main() {
    // Call the add_numbers function
    add_numbers();

    return 0;
}
