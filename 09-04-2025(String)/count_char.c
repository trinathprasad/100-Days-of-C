#include<stdio.h>
int main()
{
    char s[20];
    int i, cnt=0;
    printf("Enter a string:");
    scanf("%[^\n]",s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
        {
            cnt++;
        }
      
    }
    printf("The count of alphabet is: %d",cnt);
    return 0;
}