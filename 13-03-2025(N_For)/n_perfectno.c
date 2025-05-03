#include<stdio.h>
int main()
{
  int n,i,sum=0,a;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("The perfect no are: ");
  for(a=1;a<=n;a++)
  {
    sum=0;
  for(i=1;i<=a/2;i++)
  {
     if(a%i==0)
     {
      sum=sum+i;
     }
  }
  if(sum==a)
  {
    printf("%d ",a);
  }
}
  return 0;
}