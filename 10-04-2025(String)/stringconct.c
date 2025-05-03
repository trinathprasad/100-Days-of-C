#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],s2[100];
  printf("Enter a 1st string:");
  gets(s1);
  printf("Enter a 2nd string:");
  gets(s2);

  strcat(s1,s2);

  printf("Resulting String is:%s",s1);

  return 0;
}