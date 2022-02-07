#include<stdio.h>
int main()
{
    int start,end,i,j,prime=1;
    printf("Enter start and end of the range to find all twin prime nos. between them ");
    scanf("%d %d",&start,&end);
    for (i=start;i<=end;i++)
    {   prime=1;
        for (j=2;j<i;j++)
        {
            if ((i%j)==0)
            { prime=0;
                break;
            }
            
        }
        if(prime==1){
            for (j=2;j<i+2;j++)
        {
            if ((i+2)%j==0)
            { prime=0;
                break;
            }
            
        }
        if(prime==1){
        printf("[%d,%d]",i,i+2);
        }
        }
    }
    return 0;
}
