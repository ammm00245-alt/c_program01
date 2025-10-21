#include<stdio.h>
int main(){
  int n,i,j,temp;
  printf("Enter size of square matrix(n*n):");
  scanf("%d",&n);
  
  int a[10][10];
  
  printf("Enter elements:\n");
  for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
      scanf("%d",&a[i][j]);
  
  // Correct transpose
  for(i=0;i<n;i++)
     for(j=i+1;j<n;j++){
       temp=a[i][j];
       a[i][j]=a[j][i];
       a[j][i]=temp;
   }
  
  printf("\nTransposed matrix:\n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
    printf("\n");
  }
  return 0; 
}
