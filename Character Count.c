#include <stdio.h>

int
main ()
{
  char a[100] =
    "To make Business and Technology come together for augmenting people to create Digital Future";
  int b = strlen (a);
  int count = 0;
  for (int i = 0; i < b; i++)
    {
      if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')
	{
	  count++;
	}
    }
  printf ("%d", count);
}
