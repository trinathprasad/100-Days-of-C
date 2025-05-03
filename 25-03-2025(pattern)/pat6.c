#include<stdio.h>
int main(){
  int n,r,c;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=n;r>=1;r--)
  {
    for(c=1;c<=r;c++)
    {
      printf("  ");
    }

    for(c=1;c<=n-1;c++)
    {
      printf("%3c",'*');
    }
    printf("\n");
  }
  return 0;
}

            *  *  *  *
          *  *  *  *
        *  *  *  *
      *  *  *  *
    *  *  *  *