#include<stdio.h>
int main()
{
    float unit;
    printf("Enter the units");
    scanf("%f",&unit);
    float sum=0;
    if(unit<0)
    {
        printf("Invalid units");
        return 0;
    }
    else if(unit==0)
    {
        printf("Units cannot be Zero");
        return 0;
    }
    else if(unit>=1 && unit<=50)
    {
        sum=unit*0.50;
    }
    else if(unit>50 && unit<=150)
    {
        sum=50*0.50 + (unit-50)*0.75;
    }
    else if(unit>150 && unit<=250)
    {
        sum=50*0.50 + 100*0.75 + (unit-150)*1.20;
    }
    else if(unit>250)
    {
        sum=50*0.50 + 100*0.75 + 100*1.20 + (unit-250)*1.50;
    }
    
    printf("Base Bill:Rs.%.2f\n",sum);
    printf("Surcharge (20%):Rs.%.2f\n",(sum*0.20));
    printf("Total Bill:Rs.%.2f\n",(sum+(sum*0.20)));
    
    return 0;
}