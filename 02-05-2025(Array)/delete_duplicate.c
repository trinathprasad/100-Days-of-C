#include<stdio.h>
int main()
{
  int a[100],n,i,j,k,ele;
  printf("Ente the size of the array :");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element you want to delete");
  scanf("%d",&ele);
  for(i=0;i<n;i++)
  {  
    if(a[i]==ele)
      {
        n--;
        for(j=i;j<n;j++)
        {
          a[j]=a[j+1];
        }
        i--;
      }
  }
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
  return 0;
}