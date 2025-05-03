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
  for(k=0;s[k];k++)
  {
    if(s[k]>='A' && s[k]<='Z')
    {
      s[k]=s[k]+32;
    }
  }

  for(j=0;j<i/2;j++)
  {
    if((s[j]) != (s[i-j-1]))
    {
      printf("%s is not a palindrome",s);
      return 0;
    }
  }
  printf("%s is a palindrome",s);
  return 0;
}