
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    printf("%d",(a<b)?(c<b)?b:c:(a<c)?c:a);
    return 0;
}
