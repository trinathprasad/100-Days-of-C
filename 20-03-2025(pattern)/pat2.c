#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=r;c++)
    {
      if(c==1 || r==n || r==c )
      {
        printf("%2d",c);
      }else{
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}
1
1 2
1   3
1     4
1 2 3 4 5