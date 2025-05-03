#include<stdio.h>
int main()
{
  int a[7]={1,4,2,8,19,5,12},i;
  for(i=0;i<7;i++)
  {
    if(i%2!=0)
    {
      a[i]=a[i]*2;
    }else{
      a[i]=a[i]+10;
    }
  }
  for(i=0;i<7;i++)
  {
    printf("%d ",a[i]);
  }
    return 0;
  }