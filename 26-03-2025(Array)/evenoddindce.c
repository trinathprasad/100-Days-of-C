#include<stdio.h>
int main()
{
  int a[100],n,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Invalid input. Array size must be a positive integer.");
    return 0;
  }
  printf("Enter %d  elements:", n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Elements at even indices are :-");
  for(i=0;i<n;i++)
  {
    if(i%2==0)
    {
      printf("\nElement at index %d: %d",i,a[i]);
    }
  }
  printf("\nElements at odd indices are :-");
  for(i=0;i<n;i++)
  {
    if(i%2!=0)
    {
      printf("\nElement at index %d: %d",i,a[i]);
    }
  }

  return 0;

  }
