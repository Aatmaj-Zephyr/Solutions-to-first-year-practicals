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
int main()
{
   signed int a[20];
    signed int temp=0;
    //initialize array with values from the user
    for(int i=0;i<5;i++){//get first 5 values
       
       printf("... ");
        scanf("%d",&temp);
        a[i]=temp;
    }
    a[5]=End;
    
    //sort (bubble sort)
    for(int i=0;i<20;i++){
        for(int j=0;j<=i;j++){
            if(a[j+1]==End){
                break;
            }
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    
    //Get value from user and put it in the appropriate place
    int val=End,temp2;
    printf("Please enter value of the number ");
    scanf("%d",&val);
    for(int i=0;i<20;i++){
        if(a[i]==End){
            
            a[i]=val;
            a[i+1]=End;
            break;
        }
        if(a[i]<val){
            temp2=a[i];
            a[i]=val;
            val=temp2;
        }
    }
    
    //print the array
    for(int i=0;i<20;i++){
        if(a[i]==End){
            break;
        }
        printf("%d ",a[i]);
    }
    

    return 0;
}
