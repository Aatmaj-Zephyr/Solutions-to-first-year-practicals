#include <stdio.h>

int factorial(int a){
    if(a==0){
        return 1;
    }
    return a*factorial(a-1);
}
int main()
{
    printf("Enter a number ");
    int a=0;
    scanf("%d",&a);
   printf("%d",factorial(a));
    return 0; 
}
