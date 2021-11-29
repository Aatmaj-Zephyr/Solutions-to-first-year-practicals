#include <stdio.h>

int main()
{   char a[20];
    scanf("%s",a);
    char b;
    scanf(" %c",&b);
    int count=0;
    for(int i=0;i<=20;i++){
     if(a[i]==b) 
      count++;
    }
    printf("Count of %c is %d",b,count);

    return 0;
}
