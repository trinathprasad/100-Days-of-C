#include<stdio.h>
int main()
{
  int a[7]={1,4,2,8,19,5,12},i;
  int max=a[0];
  for(i=0;i<7;i++)
  {
    if(max<a[i])
    {
      max=a[i];
    }
  }
  printf("max-%d",max);
return 0;
}