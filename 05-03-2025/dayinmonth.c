#include<stdio.h>
int main()
{
    int month;
    printf("Enter a Number:");
    scanf("%d",&month);
    if(month>=13)
    {
        printf("Invalid month number");
        return 0;
    }
    switch(month)
    {
        case 1:case 3: case 5: case 7: case 8:case 10:case 12 : printf("31 days");
        break;
        case 2: printf("28 or 29 days (depending on leap year)");
        break;
        case 4:case 6:case 9:case 11:printf("30 days"); 
    }
    return 0;
}
