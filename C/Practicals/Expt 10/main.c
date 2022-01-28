/******************************************************************************

*******************************************************************************/
#include <stdio.h>
int X1=-1;
int X2=-1;
int X3=-1;
int x2(){
    X2=X2*-1;
    return X2*-1;
}
int x1(){
    if(X1>0){
        X1=X1*-1;
        return x2();
    }
    else{
        X1=X1*-1;
        return -1;
    }
}

int x3(){
     if(X3<0){
         X3=X3*-1;
        return x2();
    }
    else{
        X3=X3*-1;
        return 1;
    }
    
}
int main()
{   int choice;
char choicechr;
    printf("Hello World");
    for (int i=3;i>0;i--){
    printf("\nplease enter the choice:  ");
scanf(" %c",&choicechr);
if(choicechr=='A'){
    choice=x1();
}
else if(choicechr=='B'){
    choice=x3();
}
if(choice<0){
    printf("C");
}
else if(choice>0){
    printf("D");
}}
return 0;
}
