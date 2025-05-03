#include<stdio.h>
int main()
{
    int n;
    printf("Enter a week number:");
    scanf("%d",&n);

    if(n==1)
    {
        printf("MONDAY");
    }
    else if(n==2)
    {
        printf("TUSEDAY");
    }
    else if(n==3)
    {
        printf("WEDNESDAY");
    }
    else if(n==4)
    {
        printf("THURSDAY");
    }
    else if(n==5)
    {
        printf("FRIDAY");
    }
    else if(n==6)
    {
        printf("SATURDAY/WEEKOFF");
    }
    else if(n==7)
    {
        printf("SUNDAY/WEEKOFF");
    }
    else 
    {
        printf("INVALID DAY");
    }
    return 0;
}