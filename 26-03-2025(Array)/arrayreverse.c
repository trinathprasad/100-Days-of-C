#include<stdio.h>
int main()
{
  int a[100],n,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Invalid Number");
    return 0;
  }
  printf("Enter %d Elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("The values stored into the array are:");
  for(i=1;i<n;i++)
  {
    printf("%d ",a[i]);
  }

  printf("\nThe values stored into the array in reverse are: ");
for(i=n-1;i>=1;i--)
{
  printf("%d ",a[i]);
}

return 0;

}