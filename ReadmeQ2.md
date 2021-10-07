Q2. Calculate the years, months, and days from a given integer. Also, implement the necessary
 conditional statements to make sure the number entered is a positive, non-zero integer.

#include<stdio.h>
int main()
{  int a,b,c,d;
    printf("Enter an integer or the number of days  ");
    scanf("%d",&a);
   b=a/365;
   c=(a%365)/30;
   d=(a%365)%30;
   printf("%d years %d month and %d days", b, c, d);
   return 0;
}