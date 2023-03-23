
Macro to square numbers.

￼￼

Predict the output or error(s) for the following program: #define square(x) x*x main() { int i; i = 64/square(4); printf("%d",i); } 

The output of the program will be:

16

Explanation:

The program defines a macro square(x) which calculates the square of the argument x. In the main function, the integer variable i is initialized to the result of dividing 64 by square(4).

When the preprocessor substitutes square(4) with 4*4, the expression becomes 64/4*4, which is equivalent to (64/4)*4 due to operator precedence. Thus, i is assigned the value 16.

Finally, the value of i is printed using printf() function, and the output is 16.

