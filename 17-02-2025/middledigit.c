#include<stdio.h>
int main()
{
  int n;
  printf("enter a no: ");
  scanf("%d",&n);
  n=n/10;
  printf("The middle number is %d",n%10);
  return 0;
}