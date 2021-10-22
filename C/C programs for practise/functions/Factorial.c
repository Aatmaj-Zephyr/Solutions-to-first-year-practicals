#include <stdio.h>
int factorial()
{   int num;
    scanf("%d",&num);
    int ans=1;
    for(int i=1;i<=num;i++){
        ans*=i;
    }
    
    return ans;
}
int main(){
    int a;
    a=factorial();
    printf("%d",a);
    return 0;
}
