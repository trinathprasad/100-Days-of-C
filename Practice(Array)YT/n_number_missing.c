#include<stdio.h>
int main()
{
  int a[110],i,sum1=0,missing,n,sum2;
  printf("Enter the size of the array:");
  scanf("%d",&n);

  sum2= n*(n+1)/2;

  printf("Elements are:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum1=sum1+a[i];

  }
missing=sum2-sum1;
printf("The missing number  is %d",missing);

return 0;
}