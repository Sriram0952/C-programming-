
C Code Array Assignment.

￼￼

What will be the output if you execute the following code in C? #include<stdio.h> int main(){ int arr[]={6,12,18,24}; int x=0; x=arr[1]+(arr[1]=2); printf("%d",x); return 0; } 

The output of the code will be 14.

In the code, the value of the second element of the array arr is first retrieved using arr[1]. Then, the second element of arr is assigned the value 2 using (arr[1]=2). The expression arr[1] returns the value 2, which is added to the original value retrieved earlier, resulting in 12 + 2 = 14. Therefore, the value of x becomes 14 and is printed using printf().

￼￼

What will be the output if you execute the following code in C? #include<stdio.h> #include<conio.h> void main(){ int i=3,val; val=sizeof f(i)+ +f(i=1)+ +f(i-1); printf("%d %d",val,i); } int f(int num){ return num*5; } 

The output of the code is 30 1.

Here's how the expression val=sizeof f(i)+ +f(i=1)+ +f(i-1) is evaluated:

f(i) is called with i having the value 3. Since f() multiplies its argument by 5, the value returned by f(3) is 15.

Next, i is assigned the value 1 using i=1.

Then, f(i) is called again with the new value of i (which is now 1). The value returned by f(1) is 5.

Finally, f(i-1) is called with i still having the value 1. This evaluates to f(0), which returns 0.

Therefore, the expression sizeof f(i) returns 4 (assuming an int is 4 bytes on the system), and the expression +f(i=1) evaluates to +5 (due to the unary plus operator), and the expression +f(i-1) evaluates to +0.

So, the value of val becomes 4 + 5 + 0 = 9. The value of i becomes 1 due to the assignment i=1 inside the expression.

Finally, the printf() statement prints the values of val and i, separated by a space, as 9 1.

