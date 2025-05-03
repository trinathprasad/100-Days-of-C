#include<stdio.h>
int main()
{
  int a[7]={1,4,2,8,19,5,12},i,c=0;
  int n=10;
  for(i=0;i<7;i++)
  {
    if(a[i]>n)
    {
      c++;
    }
  }
  printf("%d Element is greater than 10 in this array",c);
    return 0;
  }