#include<stdio.h>
int main()
{
  int n,rem1,rem2,sum1=0,sum2=0;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Invalid Number.");
  }
  for( ;n;n=n/10)
  {
    rem1=n%10;
    sum1=sum1+rem1;
    n=n/10;
    rem2=n%10;
    sum2=sum2+rem2;
  }
  if(sum1==sum2)
  {
    printf("Alternate digit sum is same.");
  }else{
    printf("Alternate digit sum is not same.");
  }
  return 0;
}