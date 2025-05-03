#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Entre the no of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<r;c++)
    {
      printf("%2d",r);
    }
    int l=r;
    for(c=n;c>=r;c--)
    {
      printf("%2d",l);
      l++;
    }
    printf("\n");
  }
  return 0;
}

 1 2 3 4 5
 2 2 3 4 5
 3 3 3 4 5
 4 4 4 4 5
 5 5 5 5 5