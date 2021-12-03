#include <stdio.h>

int main()
{
    int i=10;//number of stars
    //scanf("%d",i)
    for (int i=0;i<=10;i++){
        for(int j=0;j<=i;j++){
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}
