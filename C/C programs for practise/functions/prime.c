#include <stdio.h>

int prime(int a){
for(int i=2;i<a;i++){
    if(a%i==0){
        return 0;
    }
}    
return 1;
}

int main()
{
    printf("Enter a number ");
    int a=0;
    scanf("%d",&a);
    printf("%d",prime(a)); // 1 for print, 0 for composite.
    return 0; 
}
