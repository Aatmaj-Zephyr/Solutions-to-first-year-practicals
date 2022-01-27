#include <stdio.h>

int main()
{   
    FILE *ptr; 
    
    ptr=fopen("myfile.txt","w+");
    printf("Hello World");
    fprintf(ptr,"Hello");
    return 0;
}
