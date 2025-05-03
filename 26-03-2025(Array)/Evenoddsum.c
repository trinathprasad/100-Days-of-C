#include<stdio.h>
int main()
{
  int a[100],n,evn=0,odd=0,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Invalid Number");
    return 0;
  }
  printf("Enter %d the elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i%2==0)
    {
      evn=evn+a[i];
    }else
    {
      odd=odd+a[i];
    }
  }
  printf("Sum of even-indexed elements = %d",evn);
  printf("\nSum of odd-indexed elements = %d",odd);
  return 0;
}