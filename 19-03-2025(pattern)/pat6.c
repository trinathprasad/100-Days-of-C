#include<stdio.h>
int main()
{
  int n,c,r;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      if(r%2==1 && c%2==0)
      {
        printf("1 ");
      }else{
        printf("0 ");
      }
      
    }
      printf("\n");
    }
    return 0;

  }
  // 0 1 0 1 0 
  // 0 0 0 0 0
  // 0 1 0 1 0
  // 0 0 0 0 0
  // 0 1 0 1 0

