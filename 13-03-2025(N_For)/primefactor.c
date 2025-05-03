#include<stdio.h>
int main()
{
  int n,i,j,c;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("please enter a positive number");
    return 0;
  }
  printf("The primefactors of %d are: ",n);
  for(i=2;i<=n;i++){
    if(n%i==0){
    c=0;
        for(j=1;j<=i;j++){
        if(i%j==0){
        c++;
      }
    }
                 if(c==2){
            printf("%d ",i);
           }
         }
       }
  return 0;
}
