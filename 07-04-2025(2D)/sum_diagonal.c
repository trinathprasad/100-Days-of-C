#include<stdio.h>
int main()
{
  int a[10][10],nr,nc,r,c,sum=0;
  printf("Enter the number of rows and columns:");
  scanf("%d%d",&nr,&nc);
  printf("Enter %d elements:",nr*nc);
  if(nr==nc){
    for(r=0;r<nr;r++)
    {
      for(c=0;c<nc;c++)
      {
        scanf("%d",&a[r][c]);
        if(r==c){
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

  printf("Addition of the principal Diagonal elements is : %d",sum);

  return 0;
}