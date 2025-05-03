#include<stdio.h>
int main()
{
  int ticketprice= 300;
  int age, nooftickets, discount, costbefore, costafter;

  printf("Enter number of tickets and age of the passenger: ");
  scanf("%d %d", &nooftickets, &age);

  costbefore = ticketprice * nooftickets;
  discount = (age>=60 && age<=100 ) ? (costbefore*0.20) : 0;
  costafter= costbefore - discount;

  printf("Total cost before discount = %d\n", costbefore);
  printf("Discount amount = %d\n", discount);
  printf("Total cost after discount = %d\n", costafter);
  
  return 0;
}
    

  