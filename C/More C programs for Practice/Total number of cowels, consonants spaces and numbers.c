#include <stdio.h>

int main()
{   char a[20];
gets(a);
    int count=0;
    int vowel=0,space=0,blank=0,num=0;
    for(int i=0;i<=20;i++){
     if(a[i]=='a'|a[i]=='e'|a[i]=='i'|a[i]=='o'|a[i]=='u') 
      vowel++;
     if(a[i]==' ')
      space++;
     if(a[i]=='\0'){
      blank=i;
      break;
     }
     if(a[i]=='1'|a[i]=='2'|a[i]=='3'|a[i]=='4'|a[i]=='5'|a[i]=='6'|a[i]=='7'|a[i]=='8'|a[i]=='9'|a[i]=='0')
      num++;
    }
    printf("%d,%d,%d,%d",vowel,space,blank-num-vowel-space,num); //blank-num-vowel-space is number of consonants. (assuming no other characters are present)

    return 0;
}
