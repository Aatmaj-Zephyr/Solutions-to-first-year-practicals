#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max=0;
    for(i=0;i<n;i++){
      if(arr[i]>max){
        max=arr[i];
      }
    }
    printf("The maximum element is: %d\n", max);
}