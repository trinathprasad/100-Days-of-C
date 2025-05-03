#include<stdio.h>
int main()
{
  int a,n,t,i,c=0,cnt=0;
  printf("Enter the first and last number:");
  scanf("%d%d",&a,&n);
  printf("The prime numbers are:");
  if(a>n)
  {
     t=a;
     a=n;
     n=t;
  }
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
  printf("%d prime number. ",cnt);
  return 0;
}