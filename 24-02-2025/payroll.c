#include<stdio.h>
int main()
{
  char ET;
  float  BS;
  printf("Enter your employee type:");
  scanf("%c", &ET);

  printf("Enter your Basic salary:");
  scanf("%f", &BS);

ET=='M'? printf("your salary increased by 10 percentage, your total salary= %.2f", BS*1.10) : ET=='H'? printf("your salary increased by 10 percentage, your total salary= %.2f", BS*1.05) : printf("your salary is = %.2f", BS);

return 0;

}

