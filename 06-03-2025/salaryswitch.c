#include<stdio.h>
int main()
{
    int sal,p;
    printf("Enter your salary:");
    scanf("%d",&sal);
    if(sal<0){
        printf("Invalid Salary");
        return 0;
    }
    if(sal==0){
        printf("Unemployed");
        return 0;
    }else if(sal>=100000){
        p=1;
    }else if(sal>=70000 && sal<=99999){
        p=2;
    }else if(sal>=50000 && sal<=69999){
        p=3;
    }else if(sal>=30000 && sal<=49999){
        p=4;
    }
    switch(p)
    {
        case 1:printf("Senior Manager");
        break;
        case 2:printf("Project Manager");
        break;
        case 3:printf("Team Lead");
        break;
        case 4:printf("Software Engineer");
        break;
        default :printf("Intern");

    }
    return 0;

    
}