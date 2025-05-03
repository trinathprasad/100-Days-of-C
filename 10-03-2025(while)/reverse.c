#include<stdio.h>
int main()
{
    int n,rev=0,rm;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n)
    {
        rm=n%10;
        rev=rev*10+rm;
        n=n/10;
    }
    printf("Reverse: %d",rev);

    return 0;
}