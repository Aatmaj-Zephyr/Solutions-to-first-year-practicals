/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Please enter 5 numbers \n");
    int one;
    int two;
    int three;
    int four;
    int five;
    int choice;
    scanf("%d",&one);
    scanf("%d",&two);
    scanf("%d",&three);
    scanf("%d",&four);
    scanf("%d",&five);
    printf("Please select a choice ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
         ;int a[4];
         a[0]=one;
         a[1]=two;
         a[2]=three;
         a[3]=four;
         a[4]=five;
         int max=a[0];
         for(int i=0;i<=4;i++){
             if(a[i]>max){
                 max=a[i];
             }
         }
         printf("%d",max);
         break;
         
         
         case 2:
         ;int b[4];
         b[0]=one;
         b[1]=two;
         b[2]=three;
         b[3]=four;
         b[4]=five;
         int min=b[0];
         for(int i=0;i<=4;i++){
             if(b[i]<min){
                 min=b[i];
             }
         }
         printf("%d",min);
         break;
         
         case 3:
         ;int c[4];
         c[0]=one;
         c[1]=two;
         c[2]=three;
         c[3]=four;
         c[4]=five;
         int sum=0;
         for(int i=0;i<=4;i++){
             sum=sum+c[i];
         }
         printf("%d",sum);
         break;
         
         case 4:
         ;int d[4];
         d[0]=one;
         d[1]=two;
         d[2]=three;
         d[3]=four;
         d[4]=five;
         int summ=0;
         for(int i=0;i<=4;i++){
             summ=summ+d[i];
         }
         printf("%d",summ/5);
         break;
         
         case 5:
         //exit
         break;
    }

    return 0;
}
