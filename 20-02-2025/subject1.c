#include<Stdio.h>
int main()
{
  int sub1, sub2, sub3, sub4, sub5;
  int pass, fail;
  printf("Enter your marks for the subject: ");
  scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
  pass = (sub1>=35) +  (sub2>=35) + (sub3>=35)+ (sub4>=35) + (sub1>=35);
  fail= 5 - pass;
  printf("pass=%d, fail=%d",pass, fail);
  return 0;
}