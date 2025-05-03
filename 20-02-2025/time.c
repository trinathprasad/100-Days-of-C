#include<stdio.h>
int main()
{
  int givensec, hours, minutes, second;
  printf("Enter a time in Second: ");
  scanf("%d",&givensec);
  
  hours = (givensec/3600);
  minutes= (givensec%3600)/60;
  second=(givensec%3600)%60;
printf("hour=%d, minute=%d, second=%d",hours,minutes,second);
  return 0;
}