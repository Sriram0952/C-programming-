#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;
    int attempts = 0;
    srand(time(NULL));
    number = rand() % 100 + 1; // generates a random number between 1 and 100
    printf("Guess the number between 1 and 100:\n");
    do {
        scanf("%d", &guess);
        attempts++;
        if (guess > number) {
            printf("Too high! Guess again:\n");
        } else if (guess < number) {
            printf("Too low! Guess again:\n");
        }
    } while (guess != number);
    printf("Congratulations, you guessed the number in %d attempts!\n", attempts);
    return 0;
}

