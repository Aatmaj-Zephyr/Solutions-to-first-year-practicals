#include <stdio.h>

int main()
{   
    char a[20];
    scanf("%s",a);
    char b[20];
    scanf("%s",b);
    int k;
    scanf("%d",&k);
    printf("a is %s\n",a);
    printf("b is %s\n",b);
    for (int i=0;i<=20;i++){
        
       if(a[i]=='\0'){
           for(int j=0;j<k;j++){ //assuming that nothing is greater than 20
               a[j+i]=b[j];
               if(b[j]=='\0'){
                   
                   break;
               }
           }
           break;
       }
    }
    printf("Concentrated string is %s\n",a);
   return 0;
}
