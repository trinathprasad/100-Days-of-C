#include<stdio.h>
int main()
{
  int nc,nr,r,c;
  printf("Enter number of rows:");
  scanf("%d",&nr);
  printf("Enter number of columns:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      printf("%d%d",c,r);
    }
    printf("\n");
  }
  return 0;
}
1121314151
1222324252
1323334353
1424344454
1525354555