#include <stdio.h>

int main()
{
    int a=4;
    int o=1;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",o);
            o++;
        }
        printf("\n");
    }

    return 0;
}
