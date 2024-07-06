#include<stdio.h>
#include<stdlib.h>

int factorial(int n) {
  int fact;
  if (n == 0) {
    fact = 1;
  } else {
    fact = n * factorial(n - 1);
  }
  return fact;
}


int main() {
  int n, fact;
  printf("Enter a number:");
  scanf("%d", &n);
  fact = factorial(n);
  printf("The factorial is : %d", fact);
  return 0;
}

