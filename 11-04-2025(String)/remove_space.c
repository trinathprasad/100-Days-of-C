#include<stdio.h>
int main()
{
  char s[100];;
  int i;
  printf("Enter a string:");
  scanf("%[^\n]",s);
  for(i=0;s[i];i++)
  {
    if(s[i]!=' ')
    {
      printf("%c",s[i]);
    }
  }
  return 0;
}