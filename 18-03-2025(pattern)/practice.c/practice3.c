#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=n;c>=1;c--)
    {
      printf("%3d ",c);
    }
    printf("\n");
  }
  return 0;
}
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1