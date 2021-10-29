#include <stdio.h>


int Pow(int x,int y){
  if(y==0){
      return 1;
      
  }
  return x*Pow(x,y-1);
}
int main()
{
   int x,y;
   scanf("%d",&x);
   scanf("%d",&y);
printf("%d",Pow(x,y));
    return 0;
}
