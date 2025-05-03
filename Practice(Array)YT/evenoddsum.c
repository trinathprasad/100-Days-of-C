#include<stdio.h>
int main()
{
  int a[7]={1,2,3,4,5,6,7},i,es=0,os=0;
  for(i=0;i<7;i++)
  {
    if(i%2==0)
    {
      es=es+a[i];
    }else{
      os=os+a[i];
    }
  }
  int res=es-os;
  printf("Diffrence-%d",res);
return 0;
}