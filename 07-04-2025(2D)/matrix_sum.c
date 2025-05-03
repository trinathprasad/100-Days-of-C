#include<stdio.h>
int main()
{
  int a[10][10],b[10][10], sum[10][10];
  int nc,nr,r,c,nr1,nc1,r1,c1;
  printf("Enter the rows and columns for first matrix:");
  scanf("%d%d",&nr,&nc);
  printf("Enter %d for first matrix",nr*nc);
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }
  printf("The First matrix is:\n");
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      printf("%d ",a[r][c]);
    }
    printf("\n");
  }
  printf("Enter the rows and columns for first matrix:");
  scanf("%d%d",&nr1,&nc1);
  printf("Enter %d for first matrix",nr1*nc1);
  for(r1=0;r1<nr1;r1++)
  {
    for(c1=0;c1<nc1;c1++)
    {
      scanf("%d",&b[r1][c1]);
    }
  }
 
  printf("The second matrix is:\n");
  for(r1=0;r1<nr1;r1++)
  {
    for(c1=0;c1<nc1;c1++)
    {
      printf("%d ",b[r1][c1]);
    }
    printf("\n");
  }
  printf("The Addition of two matrices is:\n");
  if(nr==nr1 && nc==nc1)
  {
    for(r=0;r<nr;r++)
    {
      for(c=0;c<nc;c++)
      {
        sum[r][c]=a[r][c]+b[r][c];
        printf("%d ",sum[r][c]);
      }
      printf("\n");
    }
  }

  return 0;
}

// Enter the rows and columns for first matrix:2 2
// Enter 4 for first matrix1 2 3 4

// The First matrix is:
// 1 2
// 3 4

// Enter the rows and columns for first matrix:2 2
// Enter 4 for first matrix5 6 7 8

// The second matrix is:
// 5 6
// 7 8

// The Addition of two matrices is:
// 6 8
// 10 12 