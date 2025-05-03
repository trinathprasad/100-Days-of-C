#include<stdio.h>
int main()
{
    int n,i=1,es=0,os=0;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Input");
        return 0;
    }
    while(i<=n)
    {
        if(i%2==0)
        {
            es=es+i;
        }else{
            os=os+i;
        }
        i++;
    }
    printf("Even sum = %d\n",es);
    printf("Odd sum = %d",os);

return 0;
}