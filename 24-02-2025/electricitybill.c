#include<stdio.h>
int main()
{
  float unit, bill1, bill2;
  printf("Unit consumed :\n");
  scanf("%f", &unit);

  bill1= unit*3;
  bill2 = 4.5*(unit-100)+300;

   unit<=100 ? printf("your total electricity bill=%.2f\n",bill1) : unit>100 ? printf("your total electricity bill=%.2f\n",bill2) : printf("your total electricity bill=%.2f\n",0);

  return 0;
}