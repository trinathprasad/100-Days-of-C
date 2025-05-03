#include<stdio.h>
int main(){
float PA,TA,VA,D,Total;
printf("Enter the purchase amount :");
scanf("%f",&PA);
TA=PA*0.10;
VA=PA*0.12;
D=(PA/100)*5;
Total=PA+TA+VA-D;
printf("%f",Total);
return 0;

}