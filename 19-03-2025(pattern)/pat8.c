#include<stdio.h>
int main()
{
  int n,c,r,f1=1,f2=2,f3;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      printf("%4d", f1);
      f3=f1+f2;
      f1=f2;
      f2=f3;
    }
    printf("\n");
  }
  return 0;

}
   1   2   3    5
   8  13  21   34
  55  89 144  233
 377 610 987 1597