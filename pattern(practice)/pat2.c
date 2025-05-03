#include<stdio.h>
int main()
{
    int r,c,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=n;c>r;c--)
        {
            printf("  ");
        }
        for(c=1;c<=r;c++)
        {
            printf("%2c",'*');
        }
    
    for(c=1;c<r;c++)
    {
        printf("%2c",'*');
    }
    
    printf("\n");
    }
    return 0;
}

Enter the number of rows:5
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
