#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Number is not valid");
    return 0;
  }
  printf("The even numbers are : ");
  for(i=2;i<=n*2;i++)
  {
    if(i%2==0)
    {
      printf("%d ",i);
      sum=sum+i;
    }
  }
  printf("\nThe Sum of even Natural Number upto %d terms : %d",n,sum);

  return 0;

}