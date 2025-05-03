#include<stdio.h>
int main()
{
    int a,b,es=0;
    printf("Enter a , b value:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("Invalid range. Start number should be less than or equal to end number.");
        return 0;
    }
    while(a<=b)
    {
        if(a%2==0)
        {
            es=es+a;
        }
        a++;
    }
    printf("Sum of even numbers: %d",es);
    return 0;
}