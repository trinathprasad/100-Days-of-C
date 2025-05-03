#include<stdio.h>
int main()
{
  int n,c,r,a;
  printf("Enter the number:");
  scanf("%d", &n);
  for(r=5;r>=1;r--)
  {
    a=r;
    for(c=1;c<=n;c++)
    {
      printf("%d ", a);
      a=a+5;
    }
    printf("\n");
  }
  return 0;
}

5 10 15 20 25 
4 9 14 19 24  
3 8 13 18 23  
2 7 12 17 22
1 6 11 16 21