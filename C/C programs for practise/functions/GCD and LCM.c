#include <stdio.h>
int GCD(int x,int y)
{   
    int ans=-1;
    int temp=(x<y?x:y);
    
    for(int i=1;i<=temp;i++){
        if(x%i==0&&y%i==0){
         ans=i;
         
        }
    }
    
    return ans;
}

int LCM(int x,int y)
{   
    int ans=-1;
    int temp=(x<y?y:x);
    
    for(int i=temp;i<=x*y;i++){
        if(i%x==0&&i%y==0){
         ans=i;
         break;
         
        }
    }
    
    return ans;
}
int main(){
    int a;
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    a=GCD(x,y);
    printf("%d,",a);
    a=LCM(x,y);
    printf("%d",a);
    return 0;
}

