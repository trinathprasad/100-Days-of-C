#include<stdio.h>
int main()
{
  int n,sq1,sq2,rev1=0,rev2=0,rem1,rem2;
  printf("Enter a number:");
  scanf("%d",&n);
  sq1=n*n;
  for( ;n;n=n/10)
  {
    rem1=n%10;
    rev1=rev1*10+rem1; //for reverse the number
  }
  sq2=rev1*rev1;  //441
  for( ;sq2;sq2=sq2/10)
  {
    rem2=sq2%10;              //for revrse the square
    rev2=rev2*10+rem2;
  }
  if(sq1==rev2)
  {
    printf("The number is a adam number.");
  }else{
    printf("The number is not a adam number.");

  }
  return 0;
}