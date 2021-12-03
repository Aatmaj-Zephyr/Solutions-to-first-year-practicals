#include <stdio.h>

int main()
{
    printf("Please choose one of three ");
    int option=0;
    scanf("%d",&option);
    switch(option){
        case 1:
         ///////////////////////////////////
         printf("Please enter the number ");
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
         if(rev==no2){
             printf("Paliendrome");
         }
         else{
             printf("Not a Paliendrome");
         }
         break;
         
         /////////////////////////////////////
    
    case 2: 
     
    printf("Please enter the number ");
          int no3;
         scanf("%d",&no3);
         int sum=0;
         int a=0;
         int b=1;
         int c=0;
         do{ c=a;
             a=a+b;
             b=c;
             sum=sum+a;
         }
         while(a<no3);
         printf("%d",sum);
         break;
         
    case 3:
    ;
    int sum2;
   for(int i=100;i<=200;i++){
       if(i%15==0){
           sum2=sum2+i;
       }
   }
   printf("%d",sum2);
    return 0;
    }
    return 0;
}
