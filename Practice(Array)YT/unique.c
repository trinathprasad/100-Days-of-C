#include<stdio.h>
int main()
{
  int a[100],i,j,n,c=0;
  printf("Enter the size of the array:");
  scanf("%d",&n);

  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Unique no are:");
  for(i=0;i<n;i++)
  { c=0;
    for(j=0;j<n;j++)
    {
      if(a[i]==a[j])
      {
       c++;
      }
    }
    if(c==1)
    {
      printf("%d ",a[i]);
    }
    
  }
  
  return 0;
}


