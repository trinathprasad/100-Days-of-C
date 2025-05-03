#include<stdio.h>
int main(){
  int age;
  printf("Enter your age :");
  scanf("%d", &age);
  printf("%s",age>=18?"eligible for voting":"Not Eligible for voting");
  return 0;
}