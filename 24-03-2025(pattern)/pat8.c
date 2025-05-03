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
      if(r==n || c==n || (r+c==n+1))
      {
        printf("%3d",1);
      }
      else if((r+c)>(n+1)){
        printf("%3d",r-1);
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
           1  1
        1  2  1
     1  3  3  1
  1  1  1  1  1