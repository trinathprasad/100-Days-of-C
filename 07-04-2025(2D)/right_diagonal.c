#include<stdio.h>
int main()
{
  int a[10][10],nr,nc,r,c,sum=0;
  printf("Enter the no of rows and columns:");
  scanf("%d%d",&nr,&nc);
  if(nr==nc)
  {
    printf("Enter %d elements:",nr*nc);
    for(r=0;r<nr;r++)
    {
      for(c=0;c<nc;c++)
      {
        scanf("%d",&a[r][c]);
        if(r+c==nr-1)
        {
          sum=sum+a[r][c];
        }
      }
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

    printf("Addition of the horizontal Diagonal elements is : %d",sum);

    return 0;
  }

// Enter 9 elements:1 2 3 4 5 6 7 8 9
// The matrix is :
// 1 2 3
// 4 5 6
// 7 8 9
// Addition of the horizontal Diagonal elements is : 15