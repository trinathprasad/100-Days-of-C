#include<stdio.h>
int main()
{
    int n,i=1,f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial is not defined for negative numbers.");
        return 0;
    }
    if(n==0)
    {
       f=1;
    }
    while(i<=n){
        f=f*i;
        i++;
    }
    printf("Factorial of %d: %d",n,f);
    return 0;
}