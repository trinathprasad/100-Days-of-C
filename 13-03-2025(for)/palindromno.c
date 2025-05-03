#include<stdio.h>
int main()
{
    int n,m,rev=0,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n;
    for(;n;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    if(m==rev){
        printf("%d is a palindrome.",m);
    }
    return 0;
}