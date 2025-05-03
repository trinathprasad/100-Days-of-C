#include<stdio.h>
int main()
{
  char s[20];
  int i,v=0,c=0,d=0,spe=0;
  printf("Enter a string:");
  scanf("%s",&s);
  for(i=0;s[i];i++)
  {
    if(s[i]>='a' && s[i]<='z')
    {
      s[i]=s[i]-32;
    }
  }

  for(i=0;s[i];i++)
  {
    if(s[i]>='A' && s[i]<='Z')
    {
      if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
      {
         v++;
      }
      else
      {
        c++;
      }
    }
    else if(s[i]>='0' && s[i]<='9')
    {
      d++;
    }
    else{
      spe++;
    }
  }
   
    printf("Vowel count is: %d\n",v);
    printf("Consonant count is: %d\n",c);
    printf("Digit count is: %d\n",d);
    printf("Special Character count is: %d\n",spe);

    return 0;

}