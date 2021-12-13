/******************************************************************************
Aatmaj Mhatre 16010121110 
FY Comps B

*******************************************************************************/
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
