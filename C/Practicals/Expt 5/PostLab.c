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
# define End -100000
#define n 5
int main()
{
   signed int a[20];
     signed int b[20];
    signed int temp=0;
    //initialize array with values from the user
    for(int i=0;i<n;i++){//get first n values
       
       printf("... ");
        scanf("%d",&temp);
        a[i]=temp;
    }
    a[5]=End;
    
 for (int i=0;i<n;i++){
       b[4-i]=a[i];
       
   }
   
   for (int i=0;i<n;i++){
   printf("%d ",b[i]);
       
   }
  
   
    

    return 0;
}
