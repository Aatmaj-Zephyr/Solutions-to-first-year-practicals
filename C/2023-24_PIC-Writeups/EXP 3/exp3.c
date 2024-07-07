#include <stdio.h>
void palin()
{
    int n;
    printf("Enter a num to check for Palindrome: ");
    scanf("%d",&n);
    int n1=n,k=0,ans=0;
    while(n>0) 
    {
        k=n%10;
        ans=ans*10+k;
        n=n/10;
    }
    if(ans==n1)
    printf("The Number is a Palindrome");
    else
    printf("The Number is not a Palindrome");
}
void fibo()
{
    int i, n, first = 0, second = 1, sum = 1, third;
 
   printf ("Enter the range \n");
   scanf( "%d", &n);
   for(i = 2; i < n; i++){
     third = first + second;
     sum = sum + third;
     first = second;
     second = third;
   }
 
   printf("Sum of Fibonacci series for given range is %d", sum);
}
void triangle()
{
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",i+1);
        }
        printf("\n");
    }
  
}
int main()
{
    printf("Name: Amandeep Singh\nRoll no: 16010123036\n");
    int n=0;
    printf("Enter any one of the following choices\n");
    printf("1. Palindrome\n");
    printf("2. Fibonacci\n");
    printf("3. Enter a number that you want as the height of triangle\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        palin();
        break;
    case 2:
        fibo();
        break;
    case 3:
        triangle();
        break;
    default:
    printf("Enter a correct option only");
        break;
    }
    return 0;
}
