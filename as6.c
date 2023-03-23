Undefined behavior with const pointer.

￼￼

Predict the output or error(s) for the following program: void main() { int const * p=5; printf("%d",++(*p)); } 

The program has undefined behavior because it attempts to modify a constant value, which is not allowed.

The declaration int const * p = 5; creates a pointer p to a constant integer value 5. The const keyword indicates that the value pointed to by p cannot be modified.

The expression ++(*p) attempts to increment the value pointed to by p. However, since the value is declared as const, this is not allowed and will result in undefined behavior.

Therefore, it is not possible to predict the output or error(s) for this program.

￼￼

Predict the output or error(s) for the following program: main() { int c[ ]={2.8,3.4,4,6.7,5}; int j,*p=c,*q=c; for(j=0;j<5;j++) { printf(" %d ",*c); ++q; } for(j=0;j<5;j++){ printf(" %d ",*p); ++p; } } 

The program has several errors and will not compile successfully.

First, the array c is declared as an array of integers, but the first element is initialized with a floating-point value 2.8. This is not allowed and will result in a compiler error.

Second, the pointer p is initialized with the address of the array c, but it is declared as a pointer to an integer, not an array. To fix this, the declaration should be int *p = c;.

Third, the loop that uses the variable q to print the values of the array does not actually use q. Instead, it should be using the pointer q to print the values.

Finally, the loop that prints the values of the array using p will print the same value five times, because p is incremented in each iteration but is not used to access the array. To fix this, we can use the index j to access the elements of the array, like this: printf(" %d ", p[j]);.

Here's the corrected code:

cCopy code

#include <stdio.h> int main() { int c[] = {2, 3, 4, 6, 5}; int j, *p = c, *q = c; for (j = 0; j < 5; j++) { printf(" %d ", *q); ++q; } for (j = 0; j < 5; j++) { printf(" %d ", p[j]); } return 0; } 

The output of this program will be:

Copy code

2 3 4 6 5 2 3 4 6 5 

which is the values of the array printed twice, first using q and then using p[j].

2 / 2

￼￼

Predict the output or error(s) for the following program: main() { char string[]="Hello World"; display(string); } void display(char *string) { printf("%s",string); } 

The program will compile and run successfully, and it will output the string "Hello World" to the console.

The program defines a string variable string in the main() function, initializes it to "Hello World", and passes it as an argument to the function display().

The display() function takes a char pointer string as an argument, and uses the printf() function to print the contents of the string to the console using the %s format specifier.

Since the string variable in main() is a valid C-style string (i.e., a null-terminated character array), and it is passed correctly to display() as a char pointer, the program will output "Hello World" to the console when run.

