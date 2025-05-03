#include<stdio.h>
int main()
{
  int a,b;
  printf ("Enter two numbers : ");
  scanf("%d %d", &a, &b);
  printf("%s",a%b==0 ? "a is divisible by b" : "a is not divisible by b");
  return 0;
}