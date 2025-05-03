#include<stdio.h>
int main()
{
  int a[10][10],nr,nc,r,c,rs=0,cs=0;
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

  printf("The matrix is:\n ");
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
    for(c=rs=cs=0;c<nc;c++)
    {
      rs+=a[r][c];
      cs+=a[c][r];
    }
    a[r][c]=rs;
    a[c][r]=cs;
  }
  printf("The sum of rows and columns of the matrix is:\n");
  for(r=0;r<=nr;r++)
  {
    for(c=0;c<=nc;c++)
    {
      if(r==nr && c==nc) ;
      else{
        printf("%4d",a[r][c]);
      }
    }
    printf("\n");
  }
  return 0;
}