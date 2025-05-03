#include<stdio.h>
int main()
{
  int r,c,nc,nr;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of columns:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=r;c++)
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
  
}
* 
* *
* * *
* * * *
* * * * *