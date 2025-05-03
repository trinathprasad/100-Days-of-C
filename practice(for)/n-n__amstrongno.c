#include<stdio.h>
int main()
{
    int a,b,t=0,c=0,sum,r;
    printf("Enter the 1st and last number:");
    scanf("%d %d",&a,&b);
    for( ;a<=b;a++)
    {
        t=a;
        c=0;
        while(t)
        {
            c++;
            t=t/10;
        }
        
        t=a;
        
        sum=0;
        while(t)
        {
            r=t%10;
            int pow=1;
            for(int i=1;i<=c;i++)
            {
                pow=pow*r;
            }
            sum=sum+pow;
            t=t/10;
        }
        if(sum==a)
        {
            printf("%d ",a);
        }
    }
    return 0;
    
}


// Enter the 1st and last number:100 10000
// 153 370 371 407 1634 8208 9474 
    