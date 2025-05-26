#include<stdio.h>
int main()
{
  int num1,num2,sum=0;
  int *ptr1,*ptr2;

  printf("first number: ");
  scanf("%d",&num1);

  printf("second number: ");
  scanf("%d",&num2);

  ptr1=&num1;
  ptr2=&num2;

  sum=*ptr1+*ptr2;

    printf("The sum of the entered numbers is : %d\n", sum);

    return 0;
}