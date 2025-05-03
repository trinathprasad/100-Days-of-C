#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative value not Allowed");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}