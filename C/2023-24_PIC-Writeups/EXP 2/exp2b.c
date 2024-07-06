#include<stdio.h>
#include<stdlib.h>
int main()
{
   printf("Name: Amandeep Singh\nRoll No: 16010123036\n");
   int marks;
   printf("Enter The Marks Between 0 To 100:");
   printf("\nEnter The Mark: ");
   scanf("%d", &marks);
   if(marks>100)
   {
    printf("Please enter valid marks within the range 1-100");
   }
   else
   {
   switch(marks/10)
   {
       case 10 :
       case 9 :
           printf("Your Grade is: A");
           break;
       case 8 :
           printf("Your Grade is: B" );
           break;
       case 7 :
           printf("Your Grade is: C" );
           break;
       case 6 :
           printf("Your Grade is: D" );
           break;
       case 5 :
           printf("Your Grade is: E" );
           break;
       default :
           printf("You Grade is: F or Fail\n");
   }
 }
   return 0;
}
