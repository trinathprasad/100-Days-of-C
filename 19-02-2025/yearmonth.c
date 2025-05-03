#include<stdio.h>
int main()
{
  int givendays, restdays, year, month, days;
  printf("Enter total days :");
  scanf("%d",&givendays);
  year= givendays / 365;
  restdays= givendays-365;
  month= restdays/30;
  days= restdays -(month*30);
  printf("year=%d, month=%d, days=%d",year,month,days);
  return 0;

}