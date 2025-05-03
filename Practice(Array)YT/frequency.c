#include<stdio.h>
int main()
{
  int a[100],b[100],n,i,j;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Entre %d Elements :",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(b[i]!=-1)
    {     int c=1;

      for(j=i+1;j<n;j++)
      {
        if(a[i]==a[j])
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
    if(b[i]!=-1)
    {
      printf("%d occurs %d times\n",a[i],b[i]);
    }
  }
  return 0;

}