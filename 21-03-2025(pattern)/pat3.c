#include<stdio.h>
int main()
{
  int n,c,r,l;
  printf("Enter the number of rows:");
  scanf("%d", &n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<r;c++)
    {
      printf("  ");
    }
    l=r*r;
    for(c=n;c>=r;c--)
    {
      printf("%d ",l);
      l=l+r;
    }
    printf("\n");
  }
  return 0;
}
1 2 3 4 5 
  4 6 8 10
   9 12 15
     16 20
        25
  