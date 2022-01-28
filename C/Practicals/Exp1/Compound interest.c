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
# include <math.h>
int main()
{
   printf("Please enter the interest ");
   int p;
   scanf("%d",&p);
   printf("Please enter the rate ");
   int r;
   scanf("%d",&r);
   printf("Please enter the number of years ");
   int n;
   scanf("%d",&n);
   printf("The answer is %lf",(p*r*pow((1+r),n))/(pow((1+r),n)-1));
    return 0;
}

