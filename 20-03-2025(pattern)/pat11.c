#include<stdio.h>
int main()

{
  int n,r,c,a=1;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  { a=r;
    for(c=1;c<=n;c++)
    { 
      if( r+c <= n+1 )
      {
        printf("%2d", a++);
      }else{
        printf("%2d", n);
      }
    }
    printf("\n");
  }
  return 0;
}

 1 2 3 4 5
 2 3 4 5 5
 3 4 5 5 5
 4 5 5 5 5
 5 5 5 5 5