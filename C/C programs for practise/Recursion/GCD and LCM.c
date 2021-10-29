#include <stdio.h>

int GCD(int x,int y){
  if(x==0){
      return y;
  }
  return GCD(y%x,x);
}
int LCM(int x,int y){
    return (x*y/GCD(x,y));
}
int main()
{
   int x;
   scanf("%d",&x);
   int y;
   scanf("%d",&y);
   
printf("%d,",GCD(x,y));
printf("%d",LCM(x,y));
    return 0;
}

