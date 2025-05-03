#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative value not allowed");
        return 0;
    }
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);

    }
    return 0;
}