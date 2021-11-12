#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    if(a<b){
        if(c<b)
        printf("\n%d",b);
        else
        printf("\n%d",c);
    }
    else if(a<c)
        printf("\n%d",c);
        else
        printf("\n%d",a);
    return 0;
}
