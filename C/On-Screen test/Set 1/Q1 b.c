/******************************************************************************
Aatmaj 16010121110 
B2
Q2
Write a function that takes the decimal number and base of the number system as input and
returns the equivalent number of the given base. Write a main program to input decimal
numbers and base from the user and print the equivalent number.
Check whether the base entered by the user is a single digit number or not.
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  //Step 1 Get the value of Decimal number.
  
  int Decimal; 
  //integer variable to store the decimal value.
  
  printf ("Please enter the decimal number ");
  //Ask the user to enter decimal number.
  
  scanf ("%d", &Decimal);
  //Get the decimal number from the user and assign it to the variable Decimal.
  
  
  
  //Step 2. Get the value of base from the user and check if it is a single digit Decimal.
  
  int Base;
  //integer variable to store the Base value
  
  printf ("Please enter the Base ");
  //Ask the user to enter the Base number.
  
  scanf ("%d", &Base);
  //Get the base number from the user and assign it to the variable Base.
  
  if (Base > 9 | Base<0)
  //if Base is greater than 9, then display the warning.
    {
      printf ("Warning: The input is not a single digit number\n");
      //display the warning.
    }
    //Note the code still runs if the input is a valid positive integer.
  
  
  
  //Step 3. Find the largest power of the Base which is less than or equal to the decimal number.
  
  /*Example, 
  if base=3 and decimal=32, 
  27 is the largest power of base which is less than the decimal.
  */
  
  int Largest_Number_in_the_power_of_Base = 1;
  //integer variable to store the largest power of the Base.
  
  while (Largest_Number_in_the_power_of_Base * Base <= Decimal)
  //While the Largest_Number_in_the_power_of_Base is less than Decimal, the code must be run.
  /*When Largest_Number_in_the_power_of_Base is just one power less , 
  the code must still be run, hence Largest_Number_in_the_power_of_Base * base 
  is used to ensure that the loop runs at the last iteration */
  
    {
      Largest_Number_in_the_power_of_Base = Largest_Number_in_the_power_of_Base * Base;
      // increase the power by repeated multiplication with the base.
    }
    

  //Step 4. Convert into the new base. Divide the decimal number, keep the remainder.
  /*
  Example if base=3, Decimal=23,
  the largest power is 9,
  23/9 divisor=2 and remainder=5 (23=9*2+5)
  5/3 divisor=1 and remainder=2 (5=3*1+2)
  2/1 divisor=2 and remainder=0 (2=1*2+0)
  1 is reached (0th power) so stop.
  Final answer= 212.
  */
  
  int Remainder = Decimal;
  //Variable to store the remainder. initialise Remainder.
  
  int Divisor;
  //Variable to store the Divisor.
  
  int answer = 0;
  //Variable to store the final answer. initialise it to zero.
  
  while (Largest_Number_in_the_power_of_Base != 0)
  //Repeat the steps until the powers are exhausted.
    {
      Divisor = Remainder / Largest_Number_in_the_power_of_Base;
      //Divide the number to find the divisor.
      
      /* NOTE- 
      This is an example of how c handles type conversions. 
      The answer is a floating point number, but it is automatically cast to 
      the variable of the type 'int' by rounding it down to the nearest integer.
      This is automatic application of the floor function, also known as the 
      greatest integer function which rounds the number to the greatest integer 
      less than or equal to the number. This way we can find the divisor and 
      separate it from the remainder in such cases of incomplete division.
      */
      
      Remainder = Remainder % Largest_Number_in_the_power_of_Base;
      //Find the remainder using the modulo operator.
      
      answer = 10 * answer + Divisor;
      //Multiply the answer by 10 and add the Divisor. This is shifting of the numbers to the right.
      
      Largest_Number_in_the_power_of_Base = Largest_Number_in_the_power_of_Base / Base;
      //divide the largest power by the base to obtain the lower power.
      
    }
    
  printf ("The required answer is \n%d", answer);
  //Print the final answer.

  return 0;
  //end of the program.
}
