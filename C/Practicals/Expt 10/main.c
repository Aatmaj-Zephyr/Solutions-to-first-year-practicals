
#include <stdio.h>

int main()
{   
int x1,x2,x3;
x1=-1;
x2=-1;
x3=-1;
int choice;
char choicechr;
for(int i=0;i<3;i++){
printf("\nplease enter the choice:  ");
scanf(" %c",&choicechr);
if(choicechr=='A'){
    choice=-1;
}
else if(choicechr=='B'){
    choice=1;
}
if(choice>0){
//printf("%d",choice+x1+x2);
x1=x1*-1;
x2=x2*-1;
}
else{
//printf("%d",choice+x1+x3);
x2=x2*-1;
x3=x3*-1;
}
printf("\nAnswer=");
if(choice+x1+x3>0){
    printf("D");
}
else if(choice+x1+x3<0){
    printf("C");
}
}


    return 0;
}
