#include <stdio.h>

int main()
{   char a[20];
gets(a);
    
    int vowel=0,va=0,ve=0,vi=0,vo=0,vu=0;
    for(int i=0;i<=20;i++){
     if(a[i]=='a'|a[i]=='e'|a[i]=='i'|a[i]=='o'|a[i]=='u') 
      vowel++;
    if(a[i]=='a'){
        va++;
    }
     if(a[i]=='e'){
        ve++;
    }
     if(a[i]=='i'){
        vi++;
    }
     if(a[i]=='o'){
        vo++;
    }
     if(a[i]=='u'){
        vu++;
    }
     }
     
    
    printf("%d,%d,%d,%d,%d,%d",vowel,va,ve,vi,vo,vu); 
    return 0;
}
