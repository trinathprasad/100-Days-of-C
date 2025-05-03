#include<stdio.h>
int main()
{
  int n,sum=0,r;
  printf("Enter a number:");
  scanf("%d",&n);
  while(n>9)
  {
    for(sum=0;n;n=n/10)
    {
      r=n%10;
      sum=sum+r;
    }
    n=sum;
  }
printf("The generic no=%d",n);
  return 0;
}