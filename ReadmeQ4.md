Q4. write a program to print an inverted half pyramid using stars

#include <stdio.h>
int main() {
int a;
printf("Enter the number of rows:");
    scanf("%d", &a);
    if (a>0)
{printf("\n");
for (int i=a; i>=1;i--) {
for (int j = 1; j <= i; j++)
printf("* ");
printf("\n");
}}return 0;
}