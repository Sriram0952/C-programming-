#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("%d prime numbers are: ", n);
    while (count < n) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n%dth prime number is ", n);
    while (1) {
        if (is_prime(num)) {
            if (--n == 0) {
                printf("%d\n", num);
                break;
            }
        }
        num++;
    }

    printf("%d prime numbers after %d are: ", n, num);
    count = 0;
    while (count < n) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
