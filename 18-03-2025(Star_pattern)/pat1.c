#include<stdio.h>
int main()
{
  int r,c,nr,nc;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of rows:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      printf("* ");
    }
    printf("\n");
  }
return 0;
}


* * * * 
* * * *
* * * *
* * * *
* * * *