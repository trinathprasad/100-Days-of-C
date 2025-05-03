#include<stdio.h>
int main()
{
  int n,r,c,a;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n*2;r+=2)
  {
    a=r;
    for(c=1;c<=n;c++)
    {
      printf("%2d ",a);
      a=a+2;
    }
    printf("\n");
  }
  return 0;
  
}
 1  3  5  7  9 
 3  5  7  9 11
 5  7  9 11 13
 7  9 11 13 15
 9 11 13 15 17