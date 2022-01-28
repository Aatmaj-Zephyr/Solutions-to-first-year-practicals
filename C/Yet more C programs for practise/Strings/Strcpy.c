#include <stdio.h>
#include <string.h>
int main(){
 char str[10];
 char str2[10];
 printf("Please enter a string ");
 scanf("%s",str);
 strcpy(str2,str);
 printf("%s",str2);
 return 0;
}
