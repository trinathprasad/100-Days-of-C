#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative values Not allowed");
        return 0;
    }
    if(n==0)
    {
        printf("Zero Not allowed");
        return 0;
    }
    while(i<=10)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}