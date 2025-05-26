#include<stdio.h>
int main()
{
  int a,b;
  int *p,*q;

  printf("Enter the value for a: ");
  scanf("%d",&a);

  printf("Enter the value for b: ");
  scanf("%d",&b);


p=&a;
q=&b;

if(*p>*q)
{
  printf("%d is the maximum number.\n", *p);
}
else if(*q>*p)
{
   printf("%d is the maximum number.\n", *q); 
}
else{
     printf("Both numbers are equal.\n");

}

  return 0;
}


