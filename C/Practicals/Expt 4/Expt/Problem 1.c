#include <stdio.h>

int main()
{
    int m=4;//number of stars
    //scanf("%d",i)
    for (int i=m;i>=0;i--){
        int k=2*i+1;
        for(int j=0;j<2*m+1-k;j++){
            
            printf(" ");
        }
        for(int j=0;j<k;j++){
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}
