
Fixing Array Input Errors.

￼￼

Find out the error and show the output void main() { 		intarr[3][4]; 		inti,j,k; 		printf("Enter array element"); 		for(i=0;i<3;i++) 		{ 			for(j=0; j < 4; j++) 			{ 				scanf("%d",arr[i][j]); 			} 		} 	for(i=1; i < 3; i++) 		{ 		for(j=0; j < 4; j++) 		{ 			printf(“%c”,arr[i][j]); 			} 		} 		getch(); } 

There are a few errors in the given code:

The array intarr[3][4] is declared without any initialization, which will result in undefined behavior when used later in the code.

In the scanf statement inside the nested for loops, the array element arr[i][j] is being passed as an argument to scanf without the ampersand (&) symbol before it. This will result in a compilation error.

In the printf statement inside the nested for loops, the format specifier is %c which is used for character data type, whereas the array elements are of type int. This will result in incorrect output being printed.

// corrected code
#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[3][4];
    int i, j;

    printf("Enter array elements: \n");

    For (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements: \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    getch();
}
output
Enter array elements:
1 2 3 4
5 6 7 8
9 10 11 12
Array elements:
1 2 3 4
5 6 7 8
9 10 11 12
