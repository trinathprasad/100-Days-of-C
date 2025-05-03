#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative value not Allowed");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum of the first %d natural numbers is: %d",n,sum);
    return 0;
}