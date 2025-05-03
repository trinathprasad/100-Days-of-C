#include<stdio.h>
int main()
{
    char light;
    printf("Enter a light:");
    scanf("%c",&light);

    switch(light)
    {
    case 'R': printf("Red");
    break;
    case 'G': printf("Green");
    break;
    case 'Y': printf("Yellow");
    break;
    default : printf("Invalid Character");
    break;
    }
    return 0;
}