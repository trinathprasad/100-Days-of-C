#include<stdio.h>
int main()
{
  int a[100],n,i,b[100];
  printf("Enter the size of array:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Invalid");
    return 0;
  }
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    b[i]=a[i];
  }
  printf("\nThe elements stored in the first array are: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }

  printf("\nThe elements stored in the copied array are: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",b[i]);
  }
  return 0;
}