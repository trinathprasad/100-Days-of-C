// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int a[100],b[100],n,i,j,f=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(f=0,j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b[i]=-1;
                b[j]=-1;
            }
        }
    }
    printf("\nUniqe no are:");
        for(i=0;i<n;i++)
        {
            if(b[i]==0)
            {
            printf("%2d",a[i]);
             }
    }
    return 0;
}


// Enter the size of the array:6
// Enter elements:1 2 3 4 2 1

// Uniqe no are:3 4