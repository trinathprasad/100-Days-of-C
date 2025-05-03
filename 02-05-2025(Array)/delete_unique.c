#include<stdio.h>
int main()
{
  int a[100],b[100],n,i,j,c;
  printf("Enter the size of the arrayy:");
  scanf("%d",&n);
  printf("Enter %d Elements",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  { c=1;
    if(b[i]!=-1){
    for(j=i+1;j<n;j++)
    {
      if(a[j]==a[i])
      {
        c++;
        b[j]=-1;
      }
    }
    b[i]=c;
  }
  }
  for(i=0;i<n;i++)
  {
    if(b[i]!=1)
    {
      printf("%3d",a[i]);
    }
  }
  return 0;
}