#include<stdio.h>
int main()
{
  int r,n,m,sum=0,f;
  printf("Enter a number:");
  scanf("%d",&n);
  for(m=n;m;m=m/10)
  {
    for(f=1,r=m%10;r>1;r--)
    {
      f=f*r;
    }
    sum=sum+f;
  }
  if(sum==n)
  {
    printf("The no is a strong number.");
  }else{
    printf("The no is not a strong number.");
  }
  return 0;
}