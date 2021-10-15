Q1.Swap two numbers without using a third temporary variable

#include<stdio.h>
int main()
{ int a,b;
  printf("enter the first number \n");
  scanf("%d",&a);
printf("enter the second number \n");
  scanf("%d",&b); 
 a=a*b;
b=a/b;
a=a/b;
  printf("The number are now swapped so x=%d and y=%d", x, y);
   return 0;
}
 
 
