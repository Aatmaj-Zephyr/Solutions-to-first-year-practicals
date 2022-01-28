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
    printf("Please enter the number ");
int no2;
         scanf("%d",&no2);
         int no=no2;
         int rev=0;
         int dec=1;
         int prev=0;
         while(dec<no2){
             no=(no2%(dec*10)-no2%(dec))/dec;
             rev=10*rev+no;
             dec=dec*10;
            
         }
         if(rev==no2){
             printf("Paliendrome");
         }
         else{
             printf("Not a Paliendrome");
         }
         
    return 0;
}
