#include <stdio.h>

int main()
{   int b[25];
int a[25];
    for(int i=0;i<=25;i++){
        a[i]=0;
        b[i]=0;
    }
  
    b[1]=1;
    for (int j=1;j<=25;j++){
    for (int k=1;k<=j;k++){
    a[k]=b[k-1]+b[k];
    }
    for(int i=1;i<=j;i++){
        
        printf("%d ",a[i]);
    }
        printf("\n");
        for(int i=0;i<=25;i++){
            b[i]=a[i];
        }
    }
    

    return 0;
}
