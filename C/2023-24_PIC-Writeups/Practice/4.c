#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char s[100];
  int count;
  printf("Enter the string: ");
  scanf("%s", s);
  int len = strlen(s);
  int i;
  for(int i=0; i<len; i++){
    if(s[i]=='a'){
      count++;
  }
}
  printf("The number of a's in the string is: %d\n", count);
}