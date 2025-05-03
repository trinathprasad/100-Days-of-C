#include<stdio.h>
void main()
{
  int n;
  printf("Enter the nmnber");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int j=5;j<=n;j++)
    {
      if((i+j)>=(n+1))
      {
        printf("1");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}