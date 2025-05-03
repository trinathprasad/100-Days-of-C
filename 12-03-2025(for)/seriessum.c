#include<stdio.h>
int main()
{
  int i,n;
  long term=0,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("The series is : ");
  for(i=1;i<=n;i++)
  {
    term=term*10+1;
    sum=sum+term;
    printf("%ld",term);
    if(i<n)
    {
      printf("+");
    }
  }
  printf("\n The Sum is :%ld",sum);
  return 0;

}