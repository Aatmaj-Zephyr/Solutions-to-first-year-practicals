#include <stdio.h>

int main()
{   
    char a[20];
    scanf("%s",a);
    char b[20];
    scanf("%s",b);
    printf("a is %s\n",a);
    printf("b is %s\n",b);
    int istrue=0;
    for (int i=0;i<=20;i++){
        if(a[i]=='\0'){
            break;
        }
      if(a[i]!=b[i]){
          istrue=1;
          break;
      }
    }
    if(istrue==0){
    printf("True");
    }
    else{
        printf("False");
    }
   return 0;
}
