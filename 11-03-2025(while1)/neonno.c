#include<stdio.h>
int main()
{
    int n,sq,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative values are Not allowed");
        return 0;
    }
    sq=n*n;
    while(sq)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("%d is a Neon number.",n);
    }
    else
    {
        printf("%d is NOT a Neon number.",n);
    }
    return 0;
}