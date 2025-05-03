#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number of rows:");
  scanf("%d",&n);

 for(r=1;r<=n;r++)
 {
  for(c=5;c>=r;c--)
  {
    printf("* ");
  }
  printf("\n");
 }
 return 0;
}

* * * * * 
* * * *
* * *
* *
*