#include<stdio.h>
int main()
{
  int a[100],i,c=0,n,ele;
  printf("Enter the size of the array:");
  scanf("%d",&n);

  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Enter the number you want to search.");
  scanf("%d",&ele);
  for(i=0;i<n;i++)
  {
    if(a[i]==ele){
      c++;
      break ;
    }
  }
  if(c==0)
  {
    printf("Element is not present");
  }else{
    printf("%d is found on %d index",ele,i);

  }
  return 0;
}