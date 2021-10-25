#include <stdio.h>

int fibonacci(int a,int b,int end){
    if(end==0){
        return a+b;
    }
    printf("%d,",a+b);
    fibonacci(b,a+b,end-1);
}
int main()
{

    printf("%d",fibonacci(0,1,10));
    return 0; 
}
