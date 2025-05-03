#include<stdio.h>
int main()
{
  char s[100];
  int c=0;
  printf("Enter the string :");
  scanf("%[^\n]",s);
  for(int i=0;s[i];i++)
  {
      if (i < 2) continue; 
      c=0;
      for(int j=2;j<=i/2;j++)
      {
          if(i%j==0)
          {
              c=1;
              break;
          }
      }
      if(c==0)
      {
          printf("%c",s[i]);
      }
  }
  return 0;
    
}