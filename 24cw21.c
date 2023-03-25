
Matrix Transpose Error Fix.

￼￼

Find out the error and show the output void main() { int a[20][20],c[20][20],i,j,r1,c1; clrscr(); printf("\n Enter the number of rows and column of a matrix: \n"); scanf("%d",&r1,&c1); printf("Enter the elements of matrix :"); for(i=0;i<r1;i++) { for(j=0;j<r1;j++) scanf("%d",&a[i][j]); } printf("The elements of matrix are :"); for(i=0;i<r1;i++) { Printf {“\n”); for(j=0;j<c1;j++) printf("\t%d",&a[i][j]); } printf("\n Transpose Matrix is\n"); for(i=0;i<r1;i++) { printf("\n"); for(j=0;j<c2;j++) { c[i][j]=a[j][i]; /* inverse rows and column */ printf("%d\t",c[i][j]); } } getch(); } 

There are a few errors in the given code:

The function void main() should be int main().

clrscr() is not a standard C library function. It is a function from the conio.h library and is not recommended to be used in modern code.

The scanf() function should have two separate variables passed as arguments to accept the number of rows and columns.

There is a typo in the printf() function in the second nested loop where it should be printf("\t%d",a[i][j]); instead of printf("\t%d",&a[i][j]);

The variable c2 is not declared or initialized.

Here's the corrected code:

scssCopy code

#include <stdio.h> int main() { int a[20][20],c[20][20],i,j,r1,c1; printf("\n Enter the number of rows and column of a matrix: \n"); scanf("%d%d",&r1,&c1); printf("Enter the elements of matrix :"); for(i=0;i<r1;i++) { for(j=0;j<c1;j++) { scanf("%d",&a[i][j]); } } printf("The elements of matrix are :\n"); for(i=0;i<r1;i++) { for(j=0;j<c1;j++) { printf("\t%d",a[i][j]); } printf("\n"); } printf("\n Transpose Matrix is\n"); for(i=0;i<r1;i++) { printf("\n"); for(j=0;j<c1;j++) { c[i][j]=a[j][i]; printf("%d\t",c[i][j]); } } return 0; } 

Example Output:

sqlCopy code

Enter the number of rows and column of a matrix: 2 3 Enter the elements of matrix : 1 2 3 4 5 6 The elements of matrix are : 1 2 3 4 5 6 Transpose Matrix is 1 4 2 5 3 6 

￼￼

Find out the error and show the output void main() { charstr[50]; inti,length = 0; clrscr(); printf("\nEnter the String: "); get(str); for(i=0; str[i]!='\0'; i++) { length++; } printf("\nThe length of the string is %c.",count); getche(); } 

There are a few errors in the given code:

The char array str is not declared properly. It should be char str[50];.

The int variable i is not declared.

The get() function is not a standard C library function. It should be gets(str); or fgets(str, 50, stdin);.

The variable count is not declared or initialized. It should be length.

The function getche() is not a standard C library function. It is a function from the conio.h library and is not recommended to be used in modern code.

// corrected code with errors fixed
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i, length = 0;
    printf("\nEnter the String: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    printf("\nThe length of the string is %d.", length);
    getchar();
    return 0;
}
//output
Enter the String: Hello World!
The length of the string is 12.
