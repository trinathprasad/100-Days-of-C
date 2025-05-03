#include<stdio.h>
int main()
{
  int a[10][10],nr,nc,r,c;
  printf("Enter the number of rows and columns:");
  scanf("%d%d",&nr,&nc);
  printf("Enter %d numbers:",nr*nc);
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }
  printf("The matrix is :\n");
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      printf("%d ",a[r][c]);
    }
    printf("\n");
  }
  return 0;
}

// Enter the number of rows and columns:3 3
// Enter 9 numbers:1 2 3 4 5 6 7 8 9
// The matrix is :
// 1 2 3
// 4 5 6
// 7 8 9