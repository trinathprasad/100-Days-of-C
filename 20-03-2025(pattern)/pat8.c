#include<stdio.h>
int main()

{
  int n,r,c,a=1;
  printf("Enter the number of rows:");
  scanf("%d",&n);
    for(r=1;r<=n;r++)
    { 
      for(c=1;c<=r;c++)
      {
       printf("%2d ",a);
       a=a+2;
      }
      printf("\n");
    }
  return 0;
}

1 
3  5
7  9 11
13 15 17 19
21 23 25 27 29