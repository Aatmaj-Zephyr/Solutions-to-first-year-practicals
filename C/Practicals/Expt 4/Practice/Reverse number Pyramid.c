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
    for (int i=1;i<=6;i++){
        
        for(int j=1;j<=6-i;j++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
        printf("%d",j);
        }
        printf("\n");
      }    
    printf("Hello World");

    return 0;
}
