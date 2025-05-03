#include<stdio.h>
int main()
{
  int n,r,c,a=1;
  printf("Enter the number:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
        printf("%d ",a);
        a=a+2;
    }
    printf("\n");
  }
  return 0;
}
1  3   5  7  9 
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49