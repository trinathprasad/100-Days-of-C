#include<stdio.h>
int main()
{
  int a[8]={1,2,3,4,5,6,7,8},i,j,k,ele=12,c=0;
  for(i=0;i<8;i++)
  {
    for(j=i+1;j<8;j++)
    {
     for(k=j+1;k<8;k++)
       {
        if(a[i]+a[j]+a[k]==ele)  
        {
          c++;
          printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
        }  
      }
  }
}
  printf(" Total pairs-%d",c);
return 0;
}