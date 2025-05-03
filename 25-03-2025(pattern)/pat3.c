#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {
      if(r==1 || r==n || (r==c) || (r+c)==(n+1))
      {
        printf("%3c",'*');
      }else{
        printf("   ");
      }
    }
    printf("\n");
  }
  return 0;
}



  *  *  *  *  *  *  *
     *           *
        *     *
           *
        *     *
     *           *
  *  *  *  *  *  *  *