#include<stdio.h>
int main()
{
  int n,c,r;
  printf("Enter the number of rows:");
  scanf("%d", &n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<r;c++)
    {
      printf(" ");
    }
    char ch='A';
    for(c=n;c>=r;c--)
    {   
      printf("%c", ch);
      ch++;
    }
    printf("\n");
  }
  return 0;
}


ABCDE
 ABCD
  ABC
   AB
    A
