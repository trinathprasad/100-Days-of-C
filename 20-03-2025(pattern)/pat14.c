#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number of rows:");
  scanf("%d", &n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      if(r==c || r+c== n+1)
      {
        printf("* ");
      }else{
        printf("%d ", c);
      }
    }
    printf("\n");
  }
  return 0;
}

* 2 3 4 * 
1 * 3 * 5
1 2 * 4 5
1 * 3 * 5
* 2 3 4 *