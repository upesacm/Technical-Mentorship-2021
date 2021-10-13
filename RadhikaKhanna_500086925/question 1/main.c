/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b;
    printf("please input the values of a and b: ");
    scanf("%d %d",&a, &b);
    int sum;
    sum= a+b;
    printf("the sum of a and b is: %d",sum);
    return 0;
}
