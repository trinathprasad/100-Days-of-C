#include<stdio.h>
int main()
{
    int a,b,i,gcd;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    if(a<0 || b<0)
    {
        printf("Negative value not allowed");
        return 0;
    }
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }

    }
    printf("The GCD of %d and %d is: %d",a,b,gcd);
    return 0;
}