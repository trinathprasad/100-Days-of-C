#include<stdio.h>
int main()

{
  int n,r,c,a=1;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      if(r%2!=0)
      {
        printf("%2d ", a++);
      }else{
        printf("%2d ",--a);
      }
    }
    printf("\n");
    a+=n;
  }
  return 0;
}

1  2  3  4  5 
10  9  8  7  6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25