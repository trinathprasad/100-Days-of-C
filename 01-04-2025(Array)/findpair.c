#include<stdio.h>
int main()
{
    int a[100],n,gn,i,j,c=0;
    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter %d Elements",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

    printf("Enter the given no:");
    scanf(" %d",&gn);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==gn)
            {
                printf("(%d, %d)\n",a[i],a[j]);
                c++;
            }
        }
    }
    if(c==0)
    {
      printf("No pair");
    }
    return 0;
}



// input :
// size = 8
// array elements = -3 -2 1 2 4 5 6 7
// given number = 2

// output :
// Pairs with sum 2 are:
// (-3, 5)
// (-2, 4)



// input :
// size = 5
// array elements = 1 2 3 4 5
// given number = 10

// output :
// No Pairs
