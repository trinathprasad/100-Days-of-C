#include<stdio.h>
int main()
{
    int n,r,c,a=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25