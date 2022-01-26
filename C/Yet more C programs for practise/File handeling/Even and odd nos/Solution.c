// check if numbers from 1-10 are odd or even and put in a file
#include <stdio.h>

int main()
{   FILE *f;
    f=fopen("files.txt","w+");
    for(int j=0;j<=10;j++){
        if(j%2==0){
            fprintf(f,"even\n");
        }
        else{
            fprintf(f,"odd\n");
        }
    }
fclose(f);
    return 0;
}
