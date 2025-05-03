#include<stdio.h>
int main()
{
  int a,b,n1,n2;
  printf("Enter the values for a,b :");
  scanf("%d%d", &a, &b);

  n1=50-a;
  n2=50-b;

  if (n1 < 0) n1 = -n1;
  if (n2 < 0) n2 = -n2;


  if(n1<n2)
  {
    printf("The nearest date to 50 is : %d" ,a);
  }
  else if(n2<n1)
  {
    printf("The nearest date to 50 is : %d" ,b);
  }
  else  
  {
    ("both are nearest to 50");
  }
return 0;
}