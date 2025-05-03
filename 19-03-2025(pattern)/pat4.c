#include<stdio.h>
int main()
{
  int n,r,c,a;
  printf("Enter the numer of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  { a=r;
    for(c=1;c<=n;c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
  return 0;
}
1 2 3 4 5 
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9