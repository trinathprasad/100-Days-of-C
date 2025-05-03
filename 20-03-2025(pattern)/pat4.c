#include<stdio.h>
int main()
{
  int n,r,c,a=1;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  printf("  1");
  printf("\n");
  for(r=2;r<=n;r++)
  { 
    for(c=1;c<=r;c++)
    {
      printf("%3d",a++);
    }
    printf("\n");
  }
  return 0;
}
1
1  2
3  4  5
6  7  8  9
10 11 12 13 14