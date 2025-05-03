#include<stdio.h>
int main()
{
  int a[100],n,i,ele,f=0;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements",n);
  for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }

  printf("Enter the element you want to search:");
  scanf("%d",&ele);
  for(i=0;i<n;i++)
  {
      if(a[i]==ele)
      {
        printf("Element forund on %d index\n",i);
        f++;
      }
  }
  if(f==0)
  {
    printf("Element not found.");
  }
return 0;
}

// Enter the size of the array:5
// Enter 5 elements1 2 1 3 4
// Enter the element you want to search:1
// Element forund on 0 index
// Element forund on 2 index