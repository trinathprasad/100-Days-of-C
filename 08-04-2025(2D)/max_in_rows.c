#include<stdio.h>
int main()
{
  int a[20][20];
  int nr,nc,r,c;
  printf("Enter the no of rows and columns:");
  scanf("%d%d",&nr,&nc);
  printf("Enter %d elements:",nr*nc);
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }
  printf("The matrix is:\n");
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      printf("%d ",a[r][c]);
    }
    printf("\n");
  }

  for(r=0;r<nr;r++)
  {    
    int max=a[r][0];

    for(c=0;c<nc;c++)
    {
      if(a[r][c]>max)
      {
        max=a[r][c];
      }
    }
    printf("Maximum element of row %d: %d\n",r+1,max);
  }
  return 0;
}

// Enter the no of rows and columns:3 4
// Enter 12 elements:1 2 3 21 12 1 65 9 1 56 34 2
// The matrix is:
// 1 2 3 21 
// 12 1 65 9
// 1 56 34 2
// Maximum element of row 1: 21
// Maximum element of row 2: 65
// Maximum element of row 3: 56