#include<stdio.h>
int main()
{
    int num1, num2,sum,sub,mul,div,mod;
    char op;
    printf("Enter 2 number and the sign you want the operation");
    scanf("%d%d %c",&num1,&num2,&op);

    switch(op)
    {
        case '+' :printf("Addition is: %d",(num1+num2));
        break;
        case '-' :printf("Subtraction is: %d",(num1-num2));
        break;
        case '*' :printf("Multiplication is: %d",(num1*num2));
        break;
        case '/' :printf("Division is: %d",(num1/num2));
        break;
        case '%' :printf("Modulous is: %d",(num1%num2));
        break;

    }
    return 0;

}