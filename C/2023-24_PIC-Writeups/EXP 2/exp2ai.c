#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Name: Amandeep Singh\nRoll No: 16010123036\n");
    printf("Enter Three Integers: ");
    scanf("%d %d %d",&a,&b,&c);
    int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The maximum value is (using Ternary): %d\n",max);
    
}