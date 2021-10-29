#include <stdio.h>
# include <math.h>
int main()
{
   printf("Please enter the interest ");
   int p;
   scanf("%d",&p);
   printf("Please enter the rate ");
   int r;
   scanf("%d",&r);
   printf("Please enter the number of years ");
   int n;
   scanf("%d",&n);
   printf("The answer is %lf",(p*r*pow((1+r),n))/(pow((1+r),n)-1));
    return 0;
}

