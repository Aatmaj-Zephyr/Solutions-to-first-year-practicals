/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[20];
    int temp=0;
    //initialize array with values from th user
    for(int i=0;i<5;i++){//get first 5 values
       
       printf("... ");
        scanf("%d",&temp);
        a[i]=temp;
    }
    a[5]='\0';
    
    //sort (bubble sort)
    for(int i=0;i<=20;i++){
        for(int j=0;j<=i;j++){
            if(a[j]=='\0'){
                break;
            }
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    
    //Get value from user and put it in the appropriate place
    int val='\0',temp2;
    printf("Please enter value of the number ");
    scanf("%d",&val);
    for(int i=0;i<20;i++){
        if(a[i]=='\0'){
            
            a[i]=val;
            a[i+1]='\0';
            break;
        }
        if(a[i]<val){
            temp2=a[i];
            a[i]=val;
            val=temp2;
        }
    }
    
    //print the array
    for(int i=0;i<20;i++){
        if(a[i]=='\0'){
            break;
        }
        printf("%d ",a[i]);
    }
    

    return 0;
}
