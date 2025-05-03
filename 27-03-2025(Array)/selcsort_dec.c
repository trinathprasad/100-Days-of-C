#include<stdio.h>
int main()
{
  int a[10],n,i,j,t;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<=n-2;i++)
  {
    for(j=i+1;j<=n-1;j++)
    {
      if(a[i]<a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
  return 0;
}