#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(n%3==0 && n%5==0)
    {
        printf(" Multiple of 3 and 5");
    }
    if(n%3!=0 || n%5!=0)
    printf("Not a multiple of 3 and 5");
    
    return 0;
}
