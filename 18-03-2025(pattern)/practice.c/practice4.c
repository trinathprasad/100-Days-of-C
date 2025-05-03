#include<stdio.h>
int main()
{
  int n,c,r;
  printf("Enter the number of row:");
  scanf("%d",&n);
  for(r=n;r>=1;r--)
  {
    for(c=1;c<=n;c++)
    {
      printf("%d ",r);
    }
    printf("\n");
  }
  return 0;
}

5 5 5 5 5 
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1