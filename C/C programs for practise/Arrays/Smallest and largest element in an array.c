#include <stdio.h>

int
main ()
{
  int small=0;
  int large=0;
  //Considering no negative numbers.
  //else use first element of array.
 
  
  int a[25];
  for (int i = 0; i <= 25; i++)
    {
     if(a[i]<small){
         small=a[i];
     }
     if(a[i]>large){
         large=a[i];
     }
    }
    printf("%d is smallest, %d is largest",small,large) ;
  return 0;
}
