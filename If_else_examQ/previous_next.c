#include<stdio.h>
int main()
{
  int n,pre,next;
  printf("Enter a 3 digit number:");
  scanf("%d",&n);

  if(n<0){

    printf("Nagative number is not allowed");

  }
  else if(n>=100 && n<=900){
     next=(n/100+1)*100;
     pre=(n/100)*100;

     printf("The next mul : %d\n",next);
     printf("The previous mul : %d\n",pre);

  }
  else{
    printf("Invalid Number");
  }
  return 0;
}

