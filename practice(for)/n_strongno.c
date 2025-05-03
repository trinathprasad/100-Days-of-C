#include<stdio.h>
int main()
{
  int n,a,m,r,sum=0,f,c=0;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("The strong numbers are:");
  for(a=1;a<=n;a++)
  {
    for(sum=0,m=a;m;m=m/10)
    {
      for(f=1,r=m%10;r>1;r--)
      {
        f=f*r;
      }
      sum=sum+f;
    }
    if(sum==a)
    {
      printf("%d ",sum);
      c++;
    }
  }
 printf("\n%d strong numbers.",c);
 return 0;
}