#include<stdio.h>
int main()
{
  int n,r,c,f1=0,f2=1,f3;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<r;c++)
    {
      printf("   ");
    }
    for(c=n;c>=r;c--)
    {
      printf("%3d",f1);
      f3=f1+f2;
      f1=f2;
      f2=f3;
    }
    printf("\n");
  }
  return 0;
}

 0  1  1  2  3
     5  8 13 21
       34 55 89
         144233
            377