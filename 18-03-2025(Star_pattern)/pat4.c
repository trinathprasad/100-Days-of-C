#include<stdio.h>
int main()
{
    int r,c,n;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=r;c>=1;c--)
        {
            printf("%3c",'*');
        }
        printf("\n");
    }
    for(r=n;r>=1;r--)
    {
        for(c=r;c>1;c--)
        {
            printf("%3c",'*');
        }
        printf("\n");
    }
   
    
    return 0;
}





* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
* 
