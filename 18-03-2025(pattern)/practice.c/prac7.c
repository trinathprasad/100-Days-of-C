#include<stdio.h>
int main()
{
  int n,r,c,a=2;
  printf("Enter a number:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      printf("%d ", a);
      a=a+2;
    }
    printf("\n");
  }
  return 0;
}
2 4 6 8 10 
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50