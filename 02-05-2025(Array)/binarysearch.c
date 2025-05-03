#include<stdio.h>
int main()
{
  int a[100],n,i,j,ele,t;
  printf("Enter the size of the elements:");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
    }
  }
  printf("Enter the element you want to search:");
  scanf("%d",&ele);
  int start=0;
  int end=n-1;
  int half=(start+end)/2;
  while(start<=end)
  {
    if(a[half]==ele)
    {
      printf("Element at index %d",half);
      break;
    }
    else if(a[half]>ele)
    {
      end=half-1;
    }
    else{
    start=half+1;
  }
  half=(start+end)/2;
  }
if(start>end)
{
  printf("Element not found");
}
return 0;
}