#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character :");
  scanf("%c",&ch);
  (ch>='a' && ch<='z') && printf("is a Lowercase character") || (ch>='A' && ch<='Z') && printf("is a Uppercase character") || printf("Not an alphabet");
  return 0;
}