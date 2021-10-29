#include <stdio.h>

int reverse(int x,int y){
  if(x==0){
      return y;
  }
  y=10*y+x%10;
  x=x-x%10;
  x=x/10;
  return reverse(x,y);
}
int main()
{
   int x;
   scanf("%d",&x);
   
printf("%d",reverse(x,0));
    return 0;
}

