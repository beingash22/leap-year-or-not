#include <stdio.h>

void main ()
{

  int year;
  scanf ("%d",&year);

  if (year<0)
    printf ("not a valid year");
  
  else
  {
    if (year%4==0)
      printf("yes");

    else
      printf ("no");
  }
}
