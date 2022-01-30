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
#include <stdlib.h>
int main()
{   int choice=0;
    int *pointer;
    char *pointername[7];
  int i=2;
  int fill=0;
  char *temp;
  printf("Please enter the number of students ");
  scanf("%d",&i);
    pointer= (int *) malloc(i*(sizeof(int))) ;
    *pointername= (char **) malloc(i*7*sizeof(char));
    while(choice!=4){
        printf("Please enter a choice ");
    scanf("%d", &choice);
    switch( choice) 
    {
        case 1:
          //insert
          temp=(*pointername+fill);
          scanf("%s",&*((temp)));
          printf("roll number\n");
          scanf("%d",&*(pointer+fill));
          fill++;
          break;

        case 2:
          //delete all values
          free(pointer);
          fill=0;
          break;
        case 3:
        printf("Displaying.... \n");
        for (int j=0;j<fill;j++){
          printf("%d\n",*(pointer+j));
          printf("%s\n",(*pointername+j));
        }
          //display
          break;
        case 4:
         //exit
         break;
        
        
    }
    }
    return 0;
}


