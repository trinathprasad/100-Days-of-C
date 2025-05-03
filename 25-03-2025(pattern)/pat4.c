#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      if( (r+c)>=(n+1))
      {
        printf("%3c", '*');
      }
      else{
        printf("   ");
      }
    }
    printf("\n");
  }
  for(r=2;r<=n;r++)
  {
    for(c=n;c>=1;c--)
    {
      if((r+c)<=(n+1))
      {
        printf("%3c", '*');
      }else{
        printf("   ");
      }
    }
    printf("\n");
  }
  return 0;
}

              *
           *  *
        *  *  *
     *  *  *  *
  *  *  *  *  *
     *  *  *  *
        *  *  *
           *  *
              *