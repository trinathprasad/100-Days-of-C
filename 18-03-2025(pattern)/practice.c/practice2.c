#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      printf("%d ",c);
    }
    printf("\n");
  }
  return 0;
}
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5