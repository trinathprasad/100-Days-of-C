#include<stdio.h>
int main()
{
  int a[10][10],b[10][10];
  int nr,nc,nr1,nc1,r,c,r1,c1;
  printf("Enter the rows and columns for 1st matrix:");
  scanf("%d%d",&nr,&nc);
  printf("Enter %d elements for 1st :",nr*nc);
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }

  printf("Enter the rows and columns for 2nd matrix:");
  scanf("%d%d",&nr1,&nc1);
  printf("Enter %d elements for 2nd :",nr1*nc1);
  for(r1=0;r1<nr1;r1++)
  {
    for(c1=0;c1<nc1;c1++)
    {
      scanf("%d",&b[r1][c1]);
    }
  }

  printf("The first matrix is:\n");
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      printf("%d ",a[r][c]);
    }
    printf("\n");
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

  if(nr==nr1 && nc==nc1)
  { int same=1;
    for(r=0;r<nr;r++)
    {
      for(c=0;c<nc;c++)
      {
         if(a[r][c] != b[r][c])
         {
          same=0;
         }
      }
    }

    if(same)
    {
      printf("Two matrices are equal.");
    }
  }
  return 0;
}