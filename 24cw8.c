#include <stdio.h>

double power(double base, int exponent) {
  double result = 1.0;
  int i;
  for (i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

int main() {
  double base, result;
  int exponent;

  printf("Enter the base: ");
  scanf("%lf", &base);

  printf("Enter the exponent: ");
  scanf("%d", &exponent);

  result = power(base, exponent);
  printf("%lf raised to the power of %d is %lf\n", base, exponent, result);

  return 0;
}
//output
#include <stdio.h>

int main() {
  int age = 30;
  double height = 1.75;
  char name[] = "John";

  // Output text using printf
  printf("Hello, world!\n");
  printf("My name is %s.\n", name);

  // Output values using printf
  printf("I am %d years old.\n", age);
  printf("I am %.2f meters tall.\n", height);

  return 0;
}
