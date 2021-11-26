#include <stdio.h>

int main()
{ int sum;
   for(int i=100;i<=200;i++){
       if(i%15==0){
           sum=sum+i;
       }
   }
   printf("%d",sum);
    return 0;
}
