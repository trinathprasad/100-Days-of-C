#include<stdio.h>
  void swap(int *a, int *b,int *c)
  {
    int temp;

    temp=*a;
    *a=*c;
    *c=*b;
    *b=temp;
  }
int main()
{
  int a,b,c;

  printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);


     printf("\nThe value before swapping are :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    swap(&a,&b,&c);

    printf("\nThe value after swapping are :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);



    return 0;
}