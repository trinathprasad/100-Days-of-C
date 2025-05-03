#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Please Enter Positive Values");
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is not a prime number.",n);
            return 0;
        }
        }
      printf("%d is a prime number.",n);
       return 0;
    }
