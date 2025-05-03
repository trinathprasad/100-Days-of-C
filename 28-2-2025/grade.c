#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark:");
    scanf("%d", &mark);

    if(mark>=90 && mark<=100)
    {
        printf("Grade:A");
    }
    else if(mark>=80 && mark<=89)
    {
        printf("Grade:B");
    }
    else if(mark>=70 && mark<=79)
    {
        printf("Grade:C");
    }
    else if(mark>=60 && mark<=69)
    {
        printf("Grade:D");
    }
    else if(mark>=50 && mark<=59)
    {
        printf("Grade:E");
    }
    else if(mark<50)
    {
        printf("Grade:Fail");
    }
    else{
        printf("Invalid marks! Please enter between 0 and 100");
    }

    return 0;
}