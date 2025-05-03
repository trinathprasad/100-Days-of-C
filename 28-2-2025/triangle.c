#include<stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the 3 side of the angle");
    scanf("%d%d%d", &s1, &s2, &s3);

    if(s1==s2 && s2==s3)
    {
        printf("Equilateral Triangle");
    }
    else if(s1==s2 || s1==s3 || s2==s3)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
    return 0;
}