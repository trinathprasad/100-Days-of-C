#include<stdio.h>
int main()
{
    int n,a=1,r,c;
    printf("Enter the number:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            printf("%d ",r);
        }
        printf("\n");
    }
    return 0;
}
1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5