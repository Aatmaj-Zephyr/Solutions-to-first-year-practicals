#include <stdio.h>

int
main ()
{
  int b=0;
  int a[25];
  for (int i = 0; i <= 25; i++)
    {
     if(a[i]==b){
         printf("Found at %d",i) ;
         return 0;
     }
    }
    printf("Element not found.") ;
  return 0;
}
