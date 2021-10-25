#include <stdio.h>

int prime(int a){
for(int i=2;i<a;i++){
    if(a%i==0){
        return 0;
    }
}    
return -1;
}

void Primefactorprinter(int a){
  for(int i=1;i<=a;i++){
    if(a%i==0){
        if(prime(i)==-1){
            printf("%d,",i);
        }
    }
}   
}

int main()
{
    printf("Enter a number ");
    int a=0;
    scanf("%d",&a);
   Primefactorprinter(a);
    return 0; 
}
