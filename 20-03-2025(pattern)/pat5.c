#include<stdio.h>
int main()
{
  int n,c,r,a;
  printf("Entre the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    a=r;
    int dif=n-1;
    for(c=1;c<=r;c++)
    {
      printf("%2d ", a);
      a=a+dif;
      dif--;
    }
    printf("\n");
  }
  return 0;
}
 1 
 2  6
 3  7 10
 4  8 11 13
 5  9 12 14 15