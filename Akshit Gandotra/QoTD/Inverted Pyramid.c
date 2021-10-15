/***********************************
Program to print inverted pyramid
************************************/

#include <stdio.h>

int main()
{
    int i, n, j;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}