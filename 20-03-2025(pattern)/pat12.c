#include<stdio.h>
int main()

{
  int n,r,c,num=2;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  { int count = n;
    while(count!=0)
    {
      int cnt=0;
      for(c=1;c<=num;c++)
      {
        if(num%c==0)
        {
        cnt++;
         }
      }
      if(cnt==2)
      {
        printf("%3d",num);
        count--;
      }
      num++;
  }
  printf("\n");
}
return 0;
}
2  3  5  7 11
13 17 19 23 29
31 37 41 43 47
53 59 61 67 71
73 79 83 89 97