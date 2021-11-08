#include <stdio.h>

int main()
{   
    char a[20];
    scanf("%s",a);
    for (int i=0;i<=20;i++){
        if(a[i]=='\0'){
          printf("%d",i) ;
          break;
        }
    }
   return 0;
}
