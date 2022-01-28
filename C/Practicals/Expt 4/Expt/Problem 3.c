/****
Copyright @ 2021-2022 Aatmaj.
Please refrain from copying this material.

#########
This is for reference only. Please do not copy this material.
This repository is ment only for promoting students and helping needy students, and not for encouraging any kind of malpratises or mass copying.
Hence it is requested not to copy from this repository and use it only for reference when in doubt.
######
In case of any doubts please feel free to reach me via 
- Gmail- aatmaj.mhatre@gmail.com
- Github https://github.com/Aatmaj-Zephyr
- Linkedin https://www.linkedin.com/in/aatmajmhatre/

****/

#include <stdio.h>

int main()
{
    
    int b[25];
int a[25];
    for(int i=0;i<=5;i++){
        a[i]=0;
        b[i]=0;
    }
  
    b[1]=1;
    for (int j=1;j<=5;j++){
        for(int h=0;h<=5-j;h++){
            
            printf(" ");
        }
    for (int k=1;k<=j;k++){
         
    a[k]=b[k-1]+b[k];
    }
    for(int i=1;i<=j;i++){
        
        printf("%d ",a[i]);
    }
        printf("\n");
        for(int i=0;i<=25;i++){
            b[i]=a[i];
        }
    }
}
