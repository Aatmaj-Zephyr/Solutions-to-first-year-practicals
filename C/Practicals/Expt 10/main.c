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
