#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],s2[100];
  int i,j,l1,l2;
  printf("Enter the 1st string:");
  scanf("%s",s1);
  printf("Enter the 2nd string:");
  scanf("%s",s2);

  l1=strlen(s1);
  l2=strlen(s2);

  strlwr(s1);
  strlwr(s2);

  if(l1==l2)
  {
    for(i=0;s1[i];i++)
    {
      for(j=i+1;s1[j];j++)
      {  
        if(s1[i]>s1[j])
        {
        char t=s1[i];
        s1[i]=s1[j];
        s1[j]=t;
        }
        
      }
    }

    for(i=0;s2[i];i++)
    {
      for(j=i+1;s2[j];j++)
      {
        if(s2[i]>s2[j])
        {
        char t=s2[i];
        s2[i]=s2[j];
        s2[j]=t;
        }
      }
    }

  }

  if(strcmp(s1,s2)==0)
  {
    printf("They are anagram strings");
  }
  else{
    printf("They are not anagram strings");
  }
  
  return 0;
}