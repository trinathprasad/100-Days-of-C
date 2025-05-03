#include<stdio.h>
int main()
{
    int r,n,m,sum=0,mul=1;
    printf("Entter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative value NOT Allowed");
        return 0;
    }
    m=n;
    while(m)
    {
        r=m%10;
        sum=sum+r;
        mul=mul*r;
        m=m/10;
    }
    if(sum==mul)
    {
        printf("%d is a Spy Number.",n);
    }else{
        printf("%d  is NOT a Spy Number.",n);
    }
    return 0;
}