#include<stdio.h>
int main()
{
    int n,c,r,a;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        a=r;
        for(c=1;c<=n;c++)
        {
            printf("%d ",a);
            a=a+5;

        }
        printf("\n");
    }
    return 0;
}
1 6 11 16 21 
2 7 12 17 22 
3 8 13 18 23 
4 9 14 19 24
5 10 15 20 25