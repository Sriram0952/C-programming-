
Fixing String Comparison Errors.

￼￼

Find out the error and show the output void main() { 	char str1[30],str2[30]; 	printf("Enter first string: "); 	gets(str1); 	printf("Enter second string: "); 	get(str2); 	if(strcmp(str1,str2)=0) 	{ 		print("Both strings are equal"); 	else 		printf("Strings are unequal"); 	} } 

There are a few errors in the code:

The function void main() should be int main() because it is expected to return an integer value.

The function get() is not a standard C function, it should be gets() instead.

The print() function is not a standard C function, it should be printf() instead.

The if statement's conditional expression should use == instead of = because = is an assignment operator instead of a comparison operator.

//corrected code
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30], str2[30];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Strings are unequal");
    }
    return 0;
}
//output
Enter first string: hello
Enter second string: world
Strings are unequal
