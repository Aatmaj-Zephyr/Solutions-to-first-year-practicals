#include <stdio.h>

int main()
{
    int m=4;//number of stars
    //scanf("%d",i)
    m=2*m+1;
    for (int i=m;i>=0;i--){
        
        for(int j=0;j<m-i;j++){
            
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}
