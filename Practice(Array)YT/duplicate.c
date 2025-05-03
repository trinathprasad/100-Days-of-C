#include<stdio.h>
int main()
{
  int a[100],i,j,n;
  printf("Enter the size of the array:");
  scanf("%d",&n);

  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        printf("%d is a duplicate number",a[i]);
        return ;
      }
    }
  }
  return 0;
}


