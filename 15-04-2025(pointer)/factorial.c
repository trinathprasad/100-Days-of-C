#include<stdio.h>
int main()
{
  int n,i,f=1;
  int *p;

  printf("Enter the number that you want to find the factorial : ");
  scanf("%d",&n);

  p=&n;

  for(i=1;i<=*p;i++)
  {
      f=f*i;
  }

  printf("The factorial of %d = %d",*p,f);
}