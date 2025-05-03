#include<stdio.h>
int main()
{
  int n,temp,search,c=0;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("Enter the search digit:");
  scanf("%d",&search);

  temp=n;

  while(temp>0)
  {
    if(temp%10==search)
    {
      c++;
    }
    temp=temp/10;
  }
  printf("%d occurs %d times",search,c);

  return 0;

}