#include<stdio.h>
int main()
{
  int age;
  char gen;
  char con;
  printf("Enter the age:");
  scanf("%d",&age);
  printf("Enter your gender:");
  scanf(" %c",&gen);
  printf("Enter your natinality:");
  scanf(" %c",&con);

  if(con=='i' || con=='I')
  {
    if(gen=='M' || gen=='m'|| gen=='F' || gen=='f')
    {
      if(age>=21 || (gen=='f' || gen=='F') && age>=18)
      {
        printf("You are eligible for marraige");
      }else{
        printf("You are not eligible for marraige");
      }
    }else{
      printf("Invalid gender");
    }
  }else{
    printf("Your are not eligible for married in india");
  }
  return 0;
}