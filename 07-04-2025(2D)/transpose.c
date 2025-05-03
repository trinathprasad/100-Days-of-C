#include<stdio.h>
int main()
{
  int a[10][10],nr,nc,r,c;
  printf("Enter the number of rows and columns:");
  scanf("%d%d",&nr,&nc);
  printf("Enter %d elements:",nr*nc);
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
  printf("The transpose of the matrix is:\n");
  for(c=0;c<nc;c++)
  {
    for(r=0;r<nr;r++)
    {
      printf("%d ",a[r][c]);
    }
    printf("\n");
  }
  return 0;
}


// Enter the number of rows and columns:2 2
// Enter 4 elements:1 2 3 4
// The matrix is :
// 1 2
// 3 4
// The transpose of the matrix is:
// 1 3
// 2 4
