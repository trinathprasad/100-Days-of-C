#include<stdio.h>
int main()
{
  char s1[100],s2[100],s3[100];
  int i,j;
  printf("Enter the 1st string:");
  gets(s1);
  printf("enter the 2nd string:");
  gets(s2);
  for(i=0;s1[i];i++)
  {
    s3[i]=s1[i];
  }
  for(j=0;s2[j];j++,i++) /*s3[i++]=' ' for space between two words*/
  {
    s3[i]=s2[j];
  }
  s3[i]='\0';
  printf("Resulting String is: %s",s3);

  return 0;
}