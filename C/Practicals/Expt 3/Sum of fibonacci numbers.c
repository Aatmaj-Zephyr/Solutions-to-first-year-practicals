#include <stdio.h>

int main()
{
    printf("Please enter the number ");
int no2;
         scanf("%d",&no2);
         int sum=0;
         int a=0;
         int b=1;
         int c=0;
         do{ c=a;
             a=a+b;
             b=c;
             sum=sum+a;
         }
         while(a<no2);
         printf("%d",sum);
    return 0;
}
