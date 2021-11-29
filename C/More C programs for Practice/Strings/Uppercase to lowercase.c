#include <stdio.h>

int main()
{   char a[20];
gets(a);
    for(int i=0;i<=20;i++){
        int c=(int) a[i]; //make ascii
        if(c<=90 & c>=65){
            
       a[i]=c+32; //Make small using ascii values.
            
        }
        if(a[i]=='\0'){
            break;
        }
    }
    printf("%s",a); 
    return 0;
}
