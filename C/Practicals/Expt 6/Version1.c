
#include <stdio.h>
#include <string.h>
int main()
{   struct player{
    
    int matches;
    int bestbowl;
    char name[20];
};
struct player playerlist[4];

////part a///////

for(int i=0;i<=4;i++){
scanf("%s",playerlist[i].name);
scanf("%d",&playerlist[i].matches);
scanf("%d",&playerlist[i].bestbowl);
printf("\n");
}

 //print the array
 for(int i=0;i<=4;i++){
printf("%s \n",playerlist[i].name);
printf("%d \n",playerlist[i].matches);
printf("%d \n",playerlist[i].bestbowl);
printf("\n");
}
 
 
 
 printf("Sorted \n");
 //////// part b/////
 
 for(int j=0;j<=4;j++){
 for(int i=0;i<j;i++){
if(playerlist[i].matches>=playerlist[i+1].matches){
    if(playerlist[i].matches==playerlist[i+1].matches){
    if(playerlist[i].bestbowl>playerlist[i+1].bestbowl)
        {
            struct player temp;
    //swap
    temp=playerlist[i];
    playerlist[i]=playerlist[i+1];
    playerlist[i+1]=temp;
        }
    }
    else{
    struct player temp;
    //swap
    temp=playerlist[i];
    playerlist[i]=playerlist[i+1];
    playerlist[i+1]=temp;}
}
}
 
}
 
 //print the array
 for(int i=0;i<=4;i++){
printf("%s \n",playerlist[i].name);
printf("%d \n",playerlist[i].matches);
printf("%d \n",playerlist[i].bestbowl);
printf("\n");
}


 
 
 ////part c////////
  //delete for second player.
  printf("Deleting a element from the array \n");

  for(int i=2;i<=4;i++){
playerlist[i]=playerlist[i+1];
       

}

//print the array
 for(int i=0;i<=3;i++){
printf("%s \n",playerlist[i].name);
printf("%d \n",playerlist[i].matches);
printf("%d \n",playerlist[i].bestbowl);
printf("\n");
}

 
 printf("Who do you want to search? (Will ignore if not found)") ;
 ///part d//////
char searcher[20];
scanf("%s",searcher);
 for(int i=0;i<=4;i++){
     if(strcmp(searcher,playerlist[i].name)){
printf("Found \n");
printf("%d \n",playerlist[i].matches);
printf("%d \n",playerlist[i].bestbowl);
printf("\n");
break;
}//if not found ignore. 
//If not found, "not found" can be printed. This feature can be added using a found boolean value.
}

 
 

 
    printf("Hello World");

    return 0;
}

