/****

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
  signed int i,j,temp,k, a[20], size,size2, x;
  for(int m=0;m<20;m++){
      a[m]=-10000;
  }

  printf("Enter the size of the array: ");
  scanf("%d",&size);
  printf("Enter the Numbers: \n");
  for(i=0;i<size;i++)
    {
      printf("Number %d: ",i+1);
      scanf("%d",&a[i]);
    }
  printf("\nThe Numbers in Descending order: \n");
  for(i=0;i<size;i++)
    {
      
      for(j=0;j<size-1;j++)
        {
          if(a[j]<a[j+1])
          {
            temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          
          }
        }
      
      
    }
  for(i=0;i<size;i++)
    {
      printf("Number %d: %d\n",i+1,a[i]);
    }
  printf("\nEnter how many more numbers that you would like to add  ");
  scanf("%d", &size2);
  for(k=0;k<size2;k++)
    {
      printf("Number %d: ", k+1);
      scanf("%d", &x);
      for(i=0;i<size+k+1;i++)   
        { 
          if(x>a[i])
            {
              temp = a[i];
              a[i] = x;
              x = temp;
            }
        }
    }
  printf("\nThe Numbers in Decending order: \n");
  for(i=0;i<size+size2;i++)
    {
      printf("Number %d: %d\n",i+1,a[i]);
    }
}
