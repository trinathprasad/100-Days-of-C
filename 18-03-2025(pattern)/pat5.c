#include<stdio.h>
int main()
{
    int n,r,c;
    printf("Enter a number:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            printf("%3d ",r*c);
        }
        printf("\n");
    }
    return 0;
}