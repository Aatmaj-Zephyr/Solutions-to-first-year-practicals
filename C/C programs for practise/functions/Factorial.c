#include <stdio.h>
int factorial(int num)
{   
    int ans=1;
    for(int i=1;i<=num;i++){
        ans*=i;
    }
    
    return ans;
}
int main(){
    int a;
    int num;
    scanf("%d",&num);
    a=factorial(num);
    printf("%d",a);
    return 0;
}
