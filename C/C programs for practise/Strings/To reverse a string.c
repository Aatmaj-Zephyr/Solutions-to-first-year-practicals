#include <stdio.h>

int main()
{   
    char a[20];
    char b[20];
    scanf("%s",a);
    
    for (int i=0;i<=20;i++){
       if(a[i]=='\0'){
           for(int j=0;j<=i;j++){ //assuming that nothing is greater than 20
               b[j]=a[i-j-1];
              
           }
           
           break;
       }
    }
    printf("Concentrated string is %s\n",b);
   return 0;
}
