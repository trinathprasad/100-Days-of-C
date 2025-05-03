#include<stdio.h>
int main()
{
  int n,r,c,a;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  { a=1;
    for(c=1;c<=n;c++)
    {
      if((r+c)>=(n+1))
      {
        printf("%3d",r*a);
        a++;
      }
      else{
        printf("   ");
      }
      
    }
    printf("\n");
  }
  return 0;
}    

              1
           2  4
        3  6  9
     4  8 12 16
  5 10 15 20 25