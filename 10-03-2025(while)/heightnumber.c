#include<stdio.h>
int main()
{
    int n,max=-1,r;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    do
    {
        r=n%10;
        if(max<r)
        {
            max=r;
        }
        n=n/10;
    }
        while(n!=0);
        printf("%d is the highest digit in the number.", max);
    
    return 0;  
}