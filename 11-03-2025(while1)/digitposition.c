// #include<stdio.h>
// int main()
// {
//   int n,m,c=0,d;
//   printf("Enter the number:");
//   scanf("%d",&n);
//   printf("Enter the number you want to search:");
//   scanf("%d",&d);
//   m=n;
//   do
//   {
//      c++;
//      m=m/10;   /*Counting of the number*/
//   }
//   while(m);
//   do
//   {
//     if(n%10==d)
//     {
//      printf("%d occurs on %d\n position",d,c);
//     }
//     n=n/10;
//     c--;
//   }
//   while(n);
//   return 0;
// }

#include<stdio.h>
int main()
{
  int n,m,c=0,d;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("Enter the digit you want to search:");
  scanf("%d",&d);
  m=n;
  do
  {
    c++;
    m=m/10;
  }
  while(m);
  do{
    if(n%10==d)
    {
      printf("%d is on %d position",d,c);
    }
    n=n/10;
    c--;
  }
  while(n);
  return 0;
}