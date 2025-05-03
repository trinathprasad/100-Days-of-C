#include<stdio.h>
int main()
{
  int n,c,r,f1,f2,f3;
  printf("Entre the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    f1=0;
    f2=1;
    for(c=1;c<=r;c++)
    {
      printf("%2d", f1);
      f3=f1+f2;
      f1=f2;
      f2=f3;
    }
    printf("\n");
  }
  return 0;
}