#include<stdio.h>
int main()
{
    int i,n,f1=0,f2=1,f3;
    printf("Enter a numer:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Please enter a positive integer.");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    return 0;
}