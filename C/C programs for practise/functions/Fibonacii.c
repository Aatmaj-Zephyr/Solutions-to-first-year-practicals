#include <stdio.h>
void fibonacii(int num)
{   int x=0;
    int y=1;
    int temp;
    for(int i=1;i<=num;i++){
        temp=x;
        x=x+y;
        y=temp;
        printf("%d,",x);
      
    }
}
int main(){
    int a;
    int num;
    scanf("%d",&num);
    fibonacii(num);
    return 0;
}

