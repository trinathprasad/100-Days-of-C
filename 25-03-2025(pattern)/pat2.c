#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=r;c++)
    {
      printf("%d ",c);
    }
    printf("\n");
  }
  for(r=n-1;r>=1;r--)
  {
    for(c=1;c<=r;c++)
    {
    printf("%d ",c);
    }
    printf("\n");
  }
  return 0;

  }

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1