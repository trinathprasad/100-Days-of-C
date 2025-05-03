#include<stdio.h>
int main()
{
  float r,a, circle, square;
  printf("Enter radius of circle :\n");
  printf("Enter side of square :");
  scanf("%f %f",&r,&a);
  circle=(3.14159)*(r*r);
  printf("Area of the circle: %f", circle);
  square=(a*a);
  printf("Area of he square: %f", square);
  return 0;
}