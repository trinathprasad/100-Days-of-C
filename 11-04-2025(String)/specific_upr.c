#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int st,end;
  int i;
  printf("Enter a string:");
  scanf("%[^\n]",s);
  
  printf("Enter the starting index:");
  scanf("%d",&st);
  printf("Enter the ending index:");
  scanf("%d",&end);
  
  if(st<0 || end>=strlen(s) || st>end)
  {
    printf("Index is not available.");
    return 0;
  }

  for(i=st;i<=end;i++)
  {
    if(s[i]>='a' && s[i]<='z')
    {
      s[i]=s[i]-32;
    }
  }
  printf("%s",s);
  return 0;
}