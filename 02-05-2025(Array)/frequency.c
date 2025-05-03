#include<stdio.h>
int main()
{
  int a[100],b[100]={},i,j,c=0,n;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d Elements ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(b[i]!=-1)
    {
      c=1;
      for(j=i+1;j<n;j++)
      {
        if(a[j]==a[i])
        {
          c++;
          b[j]=-1;
        }
      }
      b[i]=c;
    }
  }
  printf("The frequency of all elements of an array:\n+");
  for(i=0;i<n;i++)
  {
    if(b[i]!=-1)
    {
      printf("%d occurs %d times",a[i],b[i]);
    }
  }
  return 0;
}