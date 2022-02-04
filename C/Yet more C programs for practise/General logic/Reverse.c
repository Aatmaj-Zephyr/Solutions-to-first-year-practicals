//Reverse any digit number.
#include <stdio.h>

int main()
{   int a,digits,b;
    printf("Please enter a number ");
    scanf("%d",&a);
    for (int i=1;;){
        if(a<i){
            digits=i;
            break;
        }
        i=i*10;
        
    }
    b=0;
    for(int i=1;i<digits;){
        b=b*10;
        b=b+(a%(10*i)-a%(i))/i;
        i=i*10;
    }
    printf("%d",b);
    return 0;
}
