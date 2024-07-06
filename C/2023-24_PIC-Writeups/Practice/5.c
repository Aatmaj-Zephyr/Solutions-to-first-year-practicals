#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char s[100];
  int len;
  printf("Enter a string: ");
  scanf("%s", s);
  len = strlen(s);
  for(int i=0;i<len/2;i++){
    if(s[i]!=s[len-i-1]) {
      printf("The string is not a palindrome");
      return 0;
    } 
    else{
      printf("The string is a palindrome");
      return 0;
    }
  }
}