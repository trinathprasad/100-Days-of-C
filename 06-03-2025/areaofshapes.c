#include<stdio.h>
int main()
{
    int a;
    float pi=3.14159,r,b,h,s;
    printf("Enter a number(1/2/3)");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Enter the value:");
        scanf("%f",&r);
        printf("The area of the circle is: %.2f", pi*(r*r));
        break;

        case 2:
        printf("Enter the value of base and height:");
        scanf("%f %f",&b,&h);
        printf("The area of the triangle is: %.2f",0.5 *( b * h));
        break;

        case 3:
        printf("Enter the value");
        scanf("%f",&s);
        printf("The area of the square is: %.2f",s*s);
        break;

        default: printf("Invalid choice");


    }
    return 0;
    
}