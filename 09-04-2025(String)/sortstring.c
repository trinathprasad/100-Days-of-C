#include<stdio.h>
int main()
{
  char s[100],t=0;
  int i,j;
  printf("Enter the string:");
  scanf("%s",s);

  printf("After sorting:");
  for(i=0;s[i];i++)
  {
    for(j=i+1;s[j];j++)
    {
      if(s[i]>s[j])
      {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
      }
    }
  }
  
  printf("After sorting:%s",s);
  return 0;

}