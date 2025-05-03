
#include <stdio.h>

int main()
{
    int unit;
    float bp, sur, tp;
    printf("Enter your unit:");
    scanf("%d",&unit);
   
    if(unit>0) {
        if(unit<=50) {
            bp = unit*0.50;
        }else if(unit<=150) {
            bp = 50*0.50 + (unit-50)*0.75;
        }else if(unit<=250) {
            bp = 50*0.50 + 100*0.75 + (unit-150)*1.20;
        }else {
            bp = 50*0.50 + 100*0.75 + 100*1.20+ (unit-250)*1.50;
        }
        sur = bp*0.20;
        tp = bp+sur;
        printf("Base Bill:Rs.%.2f\n",bp);
        printf("Surcharge (20%):Rs.%.2f\n",sur);
        printf("Total Bill:Rs.%.2f",tp);
       
    }else if(unit==0) {
        printf("Units cannot be Zero");
    }else {
        printf("Invalid units");
    }

    return 0;
}
   

    