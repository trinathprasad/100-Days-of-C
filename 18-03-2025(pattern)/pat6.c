#include<stdio.h>
int main()
{
    int r,c,n;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {     char ch= 64+r;
    
        for(c=1;c<=n;c++)
        {
            printf("%3c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
A B C D 
B C D E 
C D E F 
D E F G