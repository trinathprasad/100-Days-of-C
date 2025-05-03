#include<stdio.h>
int main()
{
  float amount;
  printf("Enter the amount of the book : ");
  scanf("%f", &amount);
 (amount<1000) ? printf("No discount application total amount=%.2f", amount) : (amount>=1000 && amount<5000) ? printf("5 percentage discount applicable total amount=%.2f",(amount-(amount*0.05))) : printf("10 percentage discount applicable total amount=%.2f",(amount-(amount*0.10)));
  return 0;

}