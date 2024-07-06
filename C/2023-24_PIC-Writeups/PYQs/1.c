#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,m,j;
  printf("Enter the number of terms");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the terms of an array");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the number");
  scanf("%d",&m);
  for(i=0;i<n;i++){
    if(arr[i]!=m){
      printf("Number not found");
    }
    else{
      

    }
  }

}