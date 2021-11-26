#include <stdio.h>

int main()
{
    printf("Hello World");
int no2;
         scanf("%d",&no2);
         int no=no2;
         int rev=0;
         int dec=1;
         int prev=0;
         while(dec<no2){
             no=(no2%(dec*10)-no2%(dec))/dec;
             rev=10*rev+no;
             dec=dec*10;
            
         }
         printf("%d ",rev);
    return 0;
}
