#include<stdio.h>
int main()
{
  char s[20];
  int i,v=0;
  printf("Enter a string:");
  scanf("%s",s);

  for(i=0;s[i];i++)
  {
     if(s[i]>='a' && s[i]<='z')
     {
      s[i]-=32;
     }
  }

  for(i=0;s[i];i++)
  {
    if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
    {
      v++;
    }
  }

  if(v)
  {
    printf("This String contains vowel.");
  }else{
    printf("There is no vowel present in this String.");
  }
  return 0;
}