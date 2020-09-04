
#include <stdio.h>
  
int
findNumber (int x[], int y) 
{
  
int a;
  
a = (y + 1) * (y + 2) / 2;
  
for (int i = 0; i < y; i++)
    
a -= x[i];
  
return a;

}


 
int
main () 
{
  
int arr[] = { 1, 2, 4, 5, 6 };
  
int b = sizeof (arr) / sizeof (arr[0]);
  
int c = findNumber (arr, b);
  
printf ("%d", c);

}
