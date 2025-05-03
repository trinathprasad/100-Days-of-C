#include<stdio.h>
int main()
{
  char s[100],ch;
  int i;
  printf("Enter a string:");
  scanf("%s",s);
  printf("Enter the character you want to remove:");
  scanf(" %c", &ch);

  for(i=0;s[i];i++)
  {
    if(s[i]!=ch)
    {
      printf("%c",s[i]);
    }
  }
  return 0;
}

// Enter a string:Bookstore
// Enter the character you want to remove:o
// Bkstre