#include<stdio.h>
int main()
{
  int n,a[100];
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements :",n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  for(int i=0;i<n;i++)
  {
    for(int j=a[i];j<a[i+1];j++)
    {
      if(j != a[i])
      {
        printf("%d ",j);
      }
    }
  }
  return 0;
}