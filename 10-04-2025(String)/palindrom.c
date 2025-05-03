#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int i,j,k;
  printf("Enter a string:");
  scanf("%[^\n]",s);
  for(i=0;s[i];i++)
  {

  }

  for(j=0;j<i/2;j++)
  {
    if(tolower(s[j]) != tolower(s[i-j-1]))
    {
      printf("%s is not a palindrome",s);
      return 0;
    }
  }
  printf("%s is a palindrome",s);
  return 0;
}