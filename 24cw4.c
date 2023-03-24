#include <stdio.h>

int main() {
    const int num = 10; // defining a constant variable
    int *ptr = (int*)&num; // creating a pointer to the constant variable

    printf("Original value of num: %d\n", num);

    *ptr = 20; // modifying the value of the constant variable using the pointer

    printf("Modified value of num: %d\n", num);

    return 0;
}
