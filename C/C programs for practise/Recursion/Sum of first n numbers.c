#include <stdio.h>


int sum(int x){
  if(x==0){
      return 0;
      
  }
  return x+sum(x-1);
}
int main()
{
   int x;
   scanf("%d",&x);
   
printf("%d",sum(x));
    return 0;
}

