#include<stdio.h>
int main()
{
  int a[100],n,i,j,t,f=0;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }
  for(i=1;i<n;i++)
  {
    if(a[i]>a[0])
    {
      printf("second smollest element :- %d",a[i]);
      f++;
      break;
    }
  }
  if(f==0)
  {
    printf("Not Found");
  }
  return 0;
}