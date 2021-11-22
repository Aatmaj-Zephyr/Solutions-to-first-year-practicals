
#include <stdio.h>

int main()
{   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int d[3][3];
     for(int i=0;i<3;i++){
         for (int j=0;j<3;j++){
             int c=0;
             for(int p=0;p<3;p++){
                 c=c+b[i][p]*a[p][j];
                
             }
           d[i][j]=c;
           
               printf("%d ",c); 
         }
          printf("\n");
     }
     


    return 0;
}
