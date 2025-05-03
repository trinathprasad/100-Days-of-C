#include<stdio.h>
void main()
{
  int n;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  char c='A';
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>i;j--)
    {
      printf("  ");
    }
    for(int k=i*2-1;k>=1;k--)
    {
      if(k==1 || k==(i*2-1) || i==n)
      {
        printf("%2c",c);
      }
      else
      {
        printf("  ");
      }
      c++;
    }
    printf("\n");
    c='A';
  }

}