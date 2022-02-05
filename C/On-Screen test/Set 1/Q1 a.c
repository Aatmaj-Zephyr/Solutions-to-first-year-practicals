/******************************************************************************
Aatmaj 16010121110 
B2
Q1
Write a C program to print the numbers that do not appear in the Fibonacci series. The
number of such terms to be printed should be given by the user.
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  //Step 1- get the number of terms
  
  int Number_of_terms; 
  //The variable to store the number of terms.
  
  printf ("Please enter the number of terms "); 
  //ask user for the number of terms.
  
  scanf ("%d", &Number_of_terms); 
  //Get the value from the user and assign it to the variable Number_of_terms.
  
  
  
  //Step 2- Initialise Fibonacci variables
  
  int Smaller_Fibonacci_Number = 0; 
  //integer variable to store the smaller Fibonacci number (usually expressed as 'a')
  
  int Larger_Fibonacci_Number = 1;
  //integer variable to store the smaller Fibonacci number (usually expressed as 'a')
  
  
  //Step 3 &4 check for Fibonacci variables and print non- Fibonacci variables
  
  printf("The answer is "); //print statement for the answer.
  
  for (int i = 0; Number_of_terms > 0; i++)
  // repeat until the Number_of_terms variable is greater than 0;
    {
        
     //If the smaller Fibonacci variable is lesser than the iterator, then generate new Fibonacci terms.   
      if (Smaller_Fibonacci_Number < i)
	{
	    /*Get new Fibonacci terms
	    Logic-
	    c=a;
	    a=b;
	    b=b+a;
	    */
	  int Temporary_Fibonacci_Number = Smaller_Fibonacci_Number;
	  Smaller_Fibonacci_Number = Larger_Fibonacci_Number;
	  Larger_Fibonacci_Number = Larger_Fibonacci_Number + Temporary_Fibonacci_Number;
	  
	  
	  //Code for debugging
	  /*
	  printf("%d ,",Larger_Fibonacci_Number);
	  printf("%d ,",Smaller_Fibonacci_Number);
	  printf("%d\n",i);
	  */
	}
	
	//if i is not in Fibonacci, then print i
      if (Larger_Fibonacci_Number != i & Smaller_Fibonacci_Number != i)
	{
	  printf ("%d, ", i);
	  
	  Number_of_terms--; 
	  //reduce the number of terms when the value is printed.
	}
    }

  return 0; //end of program.
}
