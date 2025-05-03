#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("  ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%2c",'*');
        }
        printf("\n");
    }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("  ");
            }
            for(j=n;j>i;j--)
            {
                printf("%2c",'*');
            }
            printf("\n");
        }
    
    return 0;
}



Enter the number of rows:5
         *
       * *
     * * *
   * * * *
 * * * * *
   * * * *
     * * *
       * *
         *