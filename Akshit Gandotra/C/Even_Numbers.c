/******************************************************************************
Write a program to input a number and display all the even numbers till that number

*******************************************************************************/
#include <stdio.h>
int main ()
{
  int i, n;

  /* Input number */
  printf ("Enter Upper Limit: ");
  scanf ("%d", &n);

  printf ("Even numbers from 1 to %d are: \n", n);

  /*
   * Start loop from 1 to n,
   */
  for (i = 1; i <= n; i++)
    {
      /* Even Condition using remainder method */
      if (i % 2 == 0)
	{
	  printf ("%d\n", i);
	}
    }
  return 0;
}
