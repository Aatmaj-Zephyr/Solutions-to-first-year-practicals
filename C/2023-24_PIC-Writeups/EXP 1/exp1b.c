#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
  printf("Name: Amandeep Singh\nRoll No: 16010123036\n");
  int p,n;
  float r,e;
  printf("Enter the principal amount \n");
  scanf("%d",&p);
  printf("Enter the rate of interest \n");
  scanf("%f",&r);
  printf("Enter the time period(in years) \n");
  scanf("%d",&n);
  e= (p*r*(pow((1+r),n)))/((pow((1+r),n))-1);
  printf("The the final monthly instalment is %f\n",e);

}