#include<stdio.h>
int main()
{
  int n,r,c;
  int ch=64;
  printf("Enter the number of rows:");
  scanf("%d", &n);
  for(r=1;r<=n;r++)
  { ch=64+n;
    for(c=r;c<=n;c++)
    {
      printf("%c ", ch--);
    }
    printf("\n");
  }
  return 0;
}

E D C B A 
E D C B
E D C
E D
E