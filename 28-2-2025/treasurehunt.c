#include<stdio.h>
int main()
{
    int path;
    printf("Enter your path number"); 
    scanf("%d",&path);

    if(path==1)
    {
        printf("Nothing here...");
    }
    else if(path==2)
    {
        printf("You found GOLD!");
    }
    else if(path==3)
    {
        printf("Oops! You fell into TRAP!");
    }
    else
    {
        printf("Invalid Path...!");
    }
    return 0;
}