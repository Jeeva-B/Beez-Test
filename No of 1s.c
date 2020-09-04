#include <stdio.h>

int
main ()
{
  int a = 1, b = 20, c = 0, count = 0;
  for (int i = a; i <= b; i++)
    {
      c = i;
      while (c > 0)
	{
	  if (c % 10 == 1)
	    {
	      count++;
	    }
	  c = c / 10;
	}
    }
  printf ("%d", count);
}
