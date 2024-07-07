#include<stdio.h>

int main()
{
  int n,m,i,j,sum=0;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  printf("Enter the number of columns: ");
  scanf("%d",&m);
  int arr[n][m];
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      sum+=arr[i][j];
    }
  }
  printf("%d",sum);

}