#include<stdio.h>
int main()
{
    int n,pr=1,r;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    while(n)
    {
        r=n%10;
        pr=pr*r;
        n=n/10;
    }
    printf("The product of the digits is: %d",pr);
    return 0;
}