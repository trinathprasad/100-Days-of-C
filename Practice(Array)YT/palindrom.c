#include<stdio.h>
int main()
{
  int a[100],i,f=1,n;
  printf("Enter the size of the array:");
  scanf("%d",&n);

  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=0;i<n/2;i++)
  {
    if(a[i]!=a[n-i-1])
    {
      f=0;
      break;
    }
  }

  if(f==0)
  {
    printf("The array is not a palindrom.");
  }else{
    printf("This array is palindrom.");
  }
  return 0;
}