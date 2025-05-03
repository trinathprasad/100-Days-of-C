#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a,b,c values :");
  scanf("%d",&a,&b,&c);
  (a>b && a>c) && printf("a is maximum");
  (b>a && b>c) && printf("b is maximum");
  (c>a && c>b) && printf("c is maximum");
  (a==b && b==c) && printf("All are equals");
  return 0;
}