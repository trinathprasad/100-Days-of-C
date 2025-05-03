#include<stdio.h>
int main()
{
  int n,r,c,a;
  printf("Entre the number of row:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  { a=r*2-1;
    for(c=1;c<=r;c++)
    {
printf("%d ",a );
a=a+2;
    }
    printf("\n");
  }
  return 0;
}
1 
3 5
5 7 9
7 9 11 13
9 11 13 15 17