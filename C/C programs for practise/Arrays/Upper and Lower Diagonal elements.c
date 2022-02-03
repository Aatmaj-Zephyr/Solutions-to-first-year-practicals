#include <stdio.h>

int main()
{   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
     int c=0;
     int d=0;
     for(int i=0;i<3;i++){
         for (int j=0;j<3;j++){
             if(i<=j)
               c+=a[j][i];
              if(i>=j){
                  d=d+a[j][i];
              }
            
         }
          
     }
     
    printf("%d %d",c,d);

    return 0;
}
