#include<stdio.h>
int main()
{
  int sub1,sub2,sub3,sub4,sub5,total;
  float per;
  printf("Enter your mark:");
  scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
  if(sub1>100||sub1<0||sub2>100||sub2<0||sub3>100||sub3<0||sub4>100||sub4<0||sub5>100||sub5<0)
  {
      printf("Invalid mark, mark should be with in 100 numbers");
      return 0;
  }
  
  if(sub1<35 || sub2<35 || sub3<35 || sub4<35 || sub5<35)
  {
      printf("Fail");
      return 0;
  }
  
  total=sub1+sub2+sub3+sub4+sub5;
  per=(float)total/5;
  printf("Total Marks: %d\n",total);
  printf("Percentage: %.2f%\n",per);

  

  int choice=per;

switch(choice){
  case 90 ... 100: printf("Grade: A");
  break;
  case 75 ... 89: printf("Grade: B");
  break;
  case 50 ... 74: printf("Grade: C");
  break;
  case 35 ... 49: printf("Grade: D");
  break;

}


return 0;


}