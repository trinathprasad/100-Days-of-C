#include<stdio.h>
int main()

{
  int n,r,c,a=1;
  printf("Enter the number of rows:");
  scanf("%d",&n);
    for(r=1;r<=n;r++)
    { a=r;
      for(c=1;c<=r;c++)
      {
        printf("%2d",a);
        a--;
      }
      printf("\n");
    }
    return 0;
}
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1