#include <stdio.h>

int main()
{  int a[5]={2,4,5,7,6};
   int b[5];//making a new reverse std::array<
   //alternative to this is to swap the first and the last elements.
   
   
   for (int i=0;i<5;i++){
       b[4-i]=a[i];
       
   }
   
   for (int i=0;i<5;i++){
   printf("%d ",b[i]);
       
   }
  
    printf("Hello World");

    return 0;
}
