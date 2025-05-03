#include<stdio.h>
int main()
{
  int sub1,sub2,sub3,sub4,sub5;
  int pass=0, fail=0;
  printf("Enter your marks for 5 subjects :");
  scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
  sub1>=35 && ++pass || fail++ ;
  sub2>=35 && ++pass || fail++ ;
  sub3>=35 && ++pass || fail++ ;
  sub4>=35 && ++pass || fail++ ;
  sub1>=35 && ++pass || fail++ ;

  printf("pass=%d, fail=%d", pass, fail);

  return 0;




}