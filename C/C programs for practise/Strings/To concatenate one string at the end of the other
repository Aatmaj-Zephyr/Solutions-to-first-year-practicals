#include <stdio.h>

int main()
{   
    char a[20];
    scanf("%s",a);
    char b[20];
    scanf("%s",b);
    printf("a is %s\n",a);
    printf("b is %s\n",b);
    for (int i=0;i<=20;i++){
        
       if(a[i]=='\0'){
           for(int j=0;j<=20-i;j++){
               a[j+i]=b[j];
               if(b[i]=='\0'){
                   
                   break;
               }
           }
           break;
       }
    }
    printf("Concentrated string is %s\n",a);
   return 0;
}
