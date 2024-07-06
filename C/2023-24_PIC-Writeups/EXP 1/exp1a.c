#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
  printf("Name: Amandeep Singh\nRoll No: 16010123036\n");
  int a,b,c,p;
  float s,area;
  printf("Enter the length of three sides of triangle\n");
  scanf("%d%d%d",&a,&b,&c);
  s = (a+b+c)/2;
  p = a+b+c;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("The area of triangle is %f\n",area);
  printf("The perimeter of triangle is %d\n",p);
return 0;
}