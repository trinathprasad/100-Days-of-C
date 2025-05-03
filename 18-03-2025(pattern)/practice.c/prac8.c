#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter a number:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      printf("%d ", r*c);
    }
    printf("\n");
  }
  return 0;
}
1 2 3 4 5 
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25