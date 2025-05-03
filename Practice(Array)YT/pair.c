#include<stdio.h>
int main()
{
  int a[8]={1,2,3,4,5,6,7,8},i,j,ele=12,c=0;
  for(i=0;i<8;i++)
  {
    for(j=i+1;j<8;j++)
    {
    if(a[i]+a[j]==ele)
    {
      printf("(%d,%d)",a[i],a[j]);
      c++;
    }
  }
}
  printf("\nTotal pairs-%d",c);
return 0;
}