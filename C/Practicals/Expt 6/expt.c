#include <stdio.h>
#include <string.h>
int main()
{   struct player{
    
    int matches;
    int bestbowl;
    char name[20];
};
struct player playerlist[10];//overflow error not considered.
int choice=0;

for(int i=0;i<=4;i++){//take 4 entries
printf("Please enter player name  ");
scanf("%s",playerlist[i].name);
printf("Please enter player matches  ");
scanf("%d",&playerlist[i].matches);
printf("Please enter player best bowling figure  ");
scanf("%d",&playerlist[i].bestbowl);
printf("\n");
}
int length=4;//currrent length of the array
char searcher[20];//for part d in searching the name
int found=0; //for part d in finding the name

printf("Please enter your choice\n");
scanf("%d",&choice);


switch(choice){
case 1:
////part a///////
printf("Take an player \n");
printf("Please enter player name  ");
scanf("%s",playerlist[5].name);
printf("Please enter player matches  ");
scanf("%d",&playerlist[5].matches);
printf("Please enter player best bowling figure  ");
scanf("%d",&playerlist[5].bestbowl);
printf("\n");
length=length+1;

 //print the array
 for(int i=0;i<=length;i++){
printf("%s \n",playerlist[i].name);
printf("%d \n",playerlist[i].matches);
printf("%d \n",playerlist[i].bestbowl);
printf("\n");
}
 
 
 
 
 
 break;
 case 2:
 //////// part b/////
 printf("Sorting the list \n");
 for(int j=0;j<=length;j++){
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
 
 //print the array in tabular
 printf("Sorted on descending order- worst players first, with lesser matches played and lower bowling figures\n");
 printf("name     ");
 printf("matches     ");
 printf("best bowling figure     \n");
 
 for(int i=0;i<=length;i++){
printf("%s             ",playerlist[i].name);
printf("%d             ",playerlist[i].matches);
printf("%d \n",playerlist[i].bestbowl);
printf("\n");
}


 
 break;
 case 3:
 ////part c////////
  //delete for second player.
  printf("Deleting a element from the array \n");

  for(int i=2;i<=length;i++){
playerlist[i]=playerlist[i+1];
       

}
length=length-1;
//print the array
 for(int i=0;i<=length;i++){
printf("%s \n",playerlist[i].name);
printf("%d \n",playerlist[i].matches);
printf("%d \n",playerlist[i].bestbowl);
printf("\n");
}

 
 
 
 break;
 case 4:
 
 printf("Who do you want to search? ") ;
 ///part d//////
scanf("%s",searcher);
 for(int i=0;i<=length;i++){
     if(strcmp(searcher,playerlist[i].name)==0){
printf("Found \n");
printf("%s \n",playerlist[i].name);
printf("%d \n",playerlist[i].matches);
printf("%d \n",playerlist[i].bestbowl);
printf("\n");
found=1;
break;

}}
if(found==0){
    printf("Not found");

}
break;//switch break
}
    return 0;
}
