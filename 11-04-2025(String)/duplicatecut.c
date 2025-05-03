#include<stdio.h>
int main()
{
  char s[100];
  int i, j, c;

  printf("Enter a string: ");
  scanf("%s", s);

  for(i = 0; s[i]; i++)
  {
    if(s[i] != '*')
    {
      c = 1;
      for(j = i + 1; s[j]; j++)
      {
        if(s[j] == s[i])
        {
          c++;
          s[j] = '*'; // Mark duplicate
        }
      }
      printf("%c%d ", s[i], c);
    }
  }

  return 0;
}
