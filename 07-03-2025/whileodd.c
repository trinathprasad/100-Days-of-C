#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input. Program terminated.");
        return 0;
    }
    printf("Odd numbers up to %d: ",n);
        while(i<=n)
        {
            if(i%2!=0){
                printf("%d ",i);
            }
            i++;
         

        }
       return 0;
    }
    
