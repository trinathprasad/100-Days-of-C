#include<stdio.h>
int main()
{
    int day;
    scanf("%d",&day);

    if(day<=0 || day>=8)
    {
        printf("Invalid input! Please enter a number between 1 and 7.");
        return 0;
    }
    switch(day)
    {
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
    }
    return 0;
}