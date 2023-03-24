#include <stdio.h>

// Define the inner structure
struct inner_struct {
    int a;
    int b;
};

// Define the outer structure with an inner structure as a member
struct outer_struct {
    int x;
    struct inner_struct inner;
};

int main() {
    // Create an instance of the outer structure
    struct outer_struct outer;

    // Set the values of the members of the outer structure and the inner structure
    outer.x = 1;
    outer.inner.a = 2;
    outer.inner.b = 3;

    // Print the values of the members
    printf("Outer struct x value: %d\n", outer.x);
    printf("Inner struct a value: %d\n", outer.inner.a);
    printf("Inner struct b value: %d\n", outer.inner.b);

    return 0;
}
