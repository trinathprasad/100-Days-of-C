#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  n=(n/10+(n%10)/5)*10;
  printf("%d",n);
  return 0;

}