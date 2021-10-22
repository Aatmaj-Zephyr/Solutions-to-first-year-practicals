#include <stdio.h>

int expo(int x,int y)
{   
    int ans=1;
    
    for(int i=y;i>0;i--){
        ans*=x;
    }
    
    return ans;
}

int main(){
    int a;
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    a=expo(x,y);
    printf("%d",a);
    return 0;
}

