
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
          //delete
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


