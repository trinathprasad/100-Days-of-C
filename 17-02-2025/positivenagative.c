#include<stdio.h>
int main()
{
  int num;
  printf("Enter a Number:");
  scanf("%d",&num);
  printf("%s",num>0?"It is a positive number":num<0?"It is a nagative number":"Zero");
  return 0;
}