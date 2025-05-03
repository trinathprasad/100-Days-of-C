#include<stdio.h>
int main()
{
  int a[100],n,i,sum=0;
  printf("Enter the size of array:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Invalid input. Array size must be a positive integer");
    return 0;
  }else if(n==0)
  {
    printf("Invalid input. Array size must be greater than 0");
    return 0;
  }
  printf("Enter %d Elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
      sum=sum+a[i];
    }
  
  printf("The sum of all elements in the array is: %d",sum);
  return 0;
}
