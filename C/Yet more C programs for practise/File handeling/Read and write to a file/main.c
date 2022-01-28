#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr;
    ptr=fopen("MyTxt","w+");
    fprintf(ptr,"123\n456");
    char a[5];
    rewind(ptr);
    fscanf(ptr,"%s",a);
    printf("%s",a);
    fclose(ptr);
    return 0;
}
