#include<stdio.h>
int main()
{
  float CP, SP, P, L, PP, LP;
  printf("Enter the cost price : ");
  scanf("%f", &CP);

  printf("Enter the selling price:");
  scanf("%f", &SP );

  P= SP - CP ;
  L= CP - SP ;
  PP= (P/CP) * 100 ;
  LP= (L/CP) * 100 ;


  (L<=0) ? printf("Profit= %.2f\n, Loss= %.2f\n, Percentage of profit= %.2f\n, Percentage of loss= %.2f\n", P, L=0, PP, LP=0) : printf("Profit= %.2f\n, Loss= %.2f\n, Percentage of profit= %.2f\n, Percentage of loss= %.2f\n", P, L, PP, LP);
  return 0;
}