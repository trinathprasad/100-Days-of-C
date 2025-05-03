#include<stdio.h>
int main()
{
  int n,rev=0,rem1,rem2;
  printf("Enter a number:");
  scanf("%d",&n);

  if(n<0)
  {
    n=-n;
    printf("minus\n");
  }

  while(n)
  {
    rem1=n%10;
    rev=rev*10+rem1;
    n=n/10;
  }
  while(rev)
  {
    rem2=rev%10;
    switch(rem2)
    {
      case 0:printf("Zero\n");
      break;
      case 1: printf("One\n");   
      break;
      case 2: printf("Two\n");
      break;
      case 3: printf("Three\n");
      break;
      case 4: printf("Four\n");
      break;
      case 5: printf("Five\n");
      break;
      case 6: printf("Six\n");
      break;
      case 7: printf("Seven\n");
      break;
      case 8: printf("Eight\n");
      break;
      case 9: printf("Nine\n");
      break;


    }
    rev=rev/10;
  }
  return 0;
}