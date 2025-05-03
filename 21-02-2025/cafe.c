#include<stdio.h>
int main()
{
  int per_tea=15,  per_coffee=20, per_biscuits=10;
  int tea, coffee, biscuit;
  printf("Welcome to tasty treat cafe !\n");

  printf("How many cup of tea would you like to order ? :\n");
  scanf("%d", &tea);

  printf("How many cup of coffee would you like to order ? :\n ");
  scanf("%d", &coffee);

  printf("How many biscuit would you like to order ? :\n ");
  scanf("%d",&biscuit);

  printf("%d cup of tea = %d\n" ,tea, per_tea * tea);
  printf("%d cup of coffee = %d\n" ,coffee, per_coffee * coffee);
  printf("%d cup of biscuit = %d\n" ,biscuit, per_biscuits * biscuit);


  printf("Total order price = %d\n", (per_tea * tea)+(per_coffee * coffee)+(per_biscuits * biscuit));
  printf("THANK YOU FOR CHOOSING TESTY TREAT %c%c%c !", 3,3,3);

  return 0;

  
}