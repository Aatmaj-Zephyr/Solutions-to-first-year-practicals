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
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    if(a<b){
        if(c<b)
        printf("\n%d",b);
        else
        printf("\n%d",c);
    }
    else if(a<c)
        printf("\n%d",c);
        else
        printf("\n%d",a);
    return 0;
}
