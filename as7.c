#include <stdio.h>

int main()
{
    int n = 5;
    int i, j;
    
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
    1
   12
  123
 1234
12345
The outer loop iterates from 1 to n, and the inner loop prints the appropriate number of spaces and digits for each line. The number of spaces printed before the digits on each line is equal to n-i, which decreases as i increases. The digits themselves are printed using another loop that runs from 1 to i.