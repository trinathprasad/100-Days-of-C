#include<stdio.h>
int main()
{
  int x;
  printf("Enter a Value of x:");
  scanf("%d",&x);
  x=4*(x*x*x*x)+7*(x*x*x)+21*(x*x)-65*x+3;
  printf("%d" ,x);
  return 0;
}