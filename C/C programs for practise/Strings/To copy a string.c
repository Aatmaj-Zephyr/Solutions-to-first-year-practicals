#include <stdio.h>

int main()
{   
    char a[20];
    scanf("%s",a);
    char b[20];
    printf("%s\n",b);
    printf("%s\n",a);
    for (int i=0;i<=20;i++){
       b[i]=a[i];
    }
    printf("%s\n",b);
   return 0;
}
