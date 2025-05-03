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
      printf(" ");
    }
    l=n-r+1;
    for(c=n;c>=r;c--)
    {
      printf("%d",l);
      l--;
    }
    printf("\n");
  }
  return 0;
}


54321
 4321
  321
   21
    1