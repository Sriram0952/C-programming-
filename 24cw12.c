#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping, x = %d and y = %d\n", x, y);
}

int main() {
    int a = 10, b = 20;
    printf("Before swapping, a = %d and b = %d\n", a, b);
    swap(a, b);
    printf("After swap function call, a = %d and b = %d\n", a, b);
    return 0;
}
