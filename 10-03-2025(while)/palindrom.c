#include<stdio.h>
int main()
{
    int n,m,rev=0,rem;
    printf("Enter a number:");

    scanf("%d",&n);
    m=n;
    while(m)
    {
        rem=m%10;
        rev=rev*10+rem;
        m=m/10;
    }
    if(n==rev)
    {
        printf("%d is a palindrome number.",n);
    }
    else
    {
        printf("%d is a not a palindrome number.",n);

    }
    return 0;
}