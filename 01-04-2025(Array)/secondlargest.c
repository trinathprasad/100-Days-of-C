#include<stdio.h>
int main()
{
  int a[100],n,i,j,t,f=0;
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
      
    }
  }
  
   for(i=n-2;i>=0;i--)
   {
    if(a[i]<a[n-1])
    {
      printf("\nSecond Largest element is :-%d",a[i]);
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
