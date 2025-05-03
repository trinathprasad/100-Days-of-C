#include<stdio.h>
int main()
{
  char s[100];
  int a[256]={0},i;
  printf("Enter a string:");
  scanf("%[^\n]",s);
  for(i=0;s[i];i++)
  {
    a[s[i]]++;
  }
  printf("Character frequencies in the string:\n");
  for(i=0;s[i];i++)
  {
    if(a[s[i]]!=0)
    {
      printf("The frequency of %c is %d\n",s[i],a[s[i]]);
      a[s[i]]=0;
    }
  }

  return 0;
}