#include<stdio.h>
int main()
{
  int n,i,t;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    for(t=1;t<=n;t++)
    {
      printf("%d x %d = %d\t",t,i,t*i);
    }
    printf("\n");
  }
  return 0;
}



// #include<stdio.h>
// int main()
// {
//   int n, i, t;
//   printf("Enter a number: ");
//   scanf("%d", &n);
  
//   for(i = 1; i <= 10; i++)
//   {
//     for(t = 1; t <= n; t++)
//     {
//       printf("%d x %d = %d\t  ", t, i, t * i);
//     }
//     printf("\n");
//   }
  
//   return 0;
// }
