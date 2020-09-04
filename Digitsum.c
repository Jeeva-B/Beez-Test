#include <stdio.h>




int
sum (int a)
{
  int sum = 0;
  while (a > 0 || sum > 9)
    {
      if (a == 0)
	{
	  a = sum;
	  sum = 0;
	}
      sum += a % 10;
      a /= 10;
    }
  return sum;
}

int
main ()
{
  int a = 4356;
  printf ("%d", sum (a));
}
