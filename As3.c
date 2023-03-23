
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

2 / 2

￼￼

What will be the output of following c program? #include<stdio.h> #include<conio.h> float avg(float,float,float); void main(){ float p=1,q=2,r=-2,a; a=avg(p,(q=4,r=-12,q),r); printf("%f",a); } float avg(float x,float y,float z){ return (x+y+z)/3; } 

The output of the program is -2.333333.

Here's how the program works:

The variables p, q, and r are initialized to 1, 2, and -2, respectively.

Then, the function avg() is called with the arguments p, (q=4,r=-12,q), and r.

Inside the second argument of the avg() function call, the variable q is assigned the value 4, and the variable r is assigned the value -12, and then the value of q (which is now 4) is returned as part of the argument expression. So the second argument of the function avg() is 4.0.

Inside the avg() function, the expression (x+y+z)/3 calculates the average of the three arguments passed to it, which are p=1, q=4, and r=-12.

So, the value returned by avg(p,(q=4,r=-12,q),r) is (-7)/3 which is -2.333333.

Finally, this value is printed using printf() and the output is -2.333333.

