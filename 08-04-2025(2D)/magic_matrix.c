#include<stdio.h>
int main()
{
  int a[10][10],r,c,nr,nc;
  int rs=0,cs=0,ts=0,rts=0;
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
    for(rs=cs=c=0;c<nc;c++)   /*row column sum*/
        {
      rs=rs+a[r][c];
      cs=cs+a[c][r];
        }
    a[r][c]=rs;
    a[c][r]=cs;
   }

   if(nr==nc)   /*trace sum*/
   {
    for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      if(r==c)
      {
        ts=ts+a[r][c];
      }
    }
  }
 }

 if(nr==nc)   /*right trace sum*/
   {
    for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      if(r+c==nr-1)
      {
        rts=rts+a[r][c];
      }
    }
  }
 }

 if(rs==cs && rs==ts && rs==rts)
 {
  printf("given matrix is magic matrix");
 }
 else{
  printf("given matrix is not a magic matrix");
 }

 return 0;

}
