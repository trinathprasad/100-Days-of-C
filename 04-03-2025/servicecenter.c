#include<stdio.h>
int main()
{
  int vehicle, age,  Enter;
  float tyre, fule, engine, general,bill;
  char name [30];
  char model [20];

  printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your bike name:");
    scanf("%s",model);

  printf("Enter your vehicle type(2/3/4):");
  scanf("%d",&vehicle);

  if(vehicle==2 || vehicle==3 || vehicle==4)
  {
printf("Enter your vehicle age:");
scanf("%d",&age);

if(age>8)
{
  printf("Enter the number(1/2/3/4) according to your problem");
  scanf("%d",&Enter);

 if(Enter==1){
  printf("how many tyres you are facing the issue ?");
  scanf("%f" ,&tyre);

  if(tyre<=4){
    printf("Name of the owener=%s\n",name);
    printf("Name of the bike=%s\n",model);
    printf("Tyre related issue\n");
    printf("Your total bill=%.2f",bill=tyre*400);

  }else{
    printf("Invalid tyre number");
  }
 }else if(Enter==2){
  printf("Name of the owener=%s\n",name);
  printf("Name of the bike=%s\n",model);
  printf("Fuel related issue\n");
  printf("%d",bill=1500);

 }else if(Enter==3){
  printf("Name of the owener=%s\n",name);
  printf("Name of the bike=%s\n",model);
  printf("Engine related issue\n");
  printf("%d",bill=5000);

 }else if(Enter==4){
  printf("Name of the owener=%s\n",name);
  printf("Name of the bike=%s\n",model);
  printf("Tyre related issue\n");
  printf("%d",bill=1000);
 }else{
  printf("There is no issue");
 }

}
else{
  printf("your vehicle servie will done after a while");
}
  }
  else{
    printf("this service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
  }



  return 0;

}