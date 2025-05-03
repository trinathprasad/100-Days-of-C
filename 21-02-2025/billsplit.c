#include<stdio.h>
int main()
{
  int people;
  float amount, split;

  printf("Enter the total amount:\n");
  scanf("%f", &amount);

  printf("Number of people:\n");
  scanf("%d", &people);

   split = amount / people;

   printf("Total bill= %.2f\n", amount);
   printf("Number of people=%d\n", people);

   printf("Amount each person needs to pay = %.2f", split);






}