#include<stdio.h>
int main()
{
  float PA, SI;
  int IR, Time;

  printf("Principal amount :\n");
  scanf("%f",&PA);

  printf("Intrest rate (in percentage):\n");       
  scanf("%d",&IR);

  printf("Time:\n");
  scanf("%d",&Time);

  SI= PA * IR * Time/100;

  printf("Simple interest is = %.2f", SI);

  return 0;

}