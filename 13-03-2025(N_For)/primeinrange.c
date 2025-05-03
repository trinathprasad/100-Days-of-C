#include<stdio.h>
int main()
{
  int a,i,n,t,c,cnt=0;
  printf("Enter the 1st and last digit.");
  scanf("%d%d",&a,&n);
  if(a>n)
  {
    t=a;
    a=n;
    n=t;
  }
  printf("Prime numbers in the range are:");
  for( ;a<=n;a++)
  {
    c=0;
    for(i=1;i<=a;i++)
    {
      if(a%i==0)
      {
        c++;
      }
      
    }
    if(c==2)
    {
      printf("%d ",a);
      cnt++;
    }

  }
  printf(" and count is %d ",cnt);
  return 0;

}