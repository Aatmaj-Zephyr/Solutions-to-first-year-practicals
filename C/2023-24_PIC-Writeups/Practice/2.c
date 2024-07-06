#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char s[100];
  printf("Enter a string : ");
  scanf("%s",&s);
  int len = strlen(s);
  int i=0;
  for(i=0;i<len/2;i++){
    char temp = s[i];
    s[i] = s[len-i-1];
    s[len-i-1] = temp;
  }
  printf("Reversed string : %s",s);

}