#include<stdio.h>
int main()
{
  int n,r,c;
  char ch='A';
  printf("Enter the numbef of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
    {     printf("%2c",ch);

      if(ch>='A' && ch<='Z')
      {
        ch=ch+33;
      }else{
        ch=ch-31;
      }
    }
    printf("\n");
  }
  return 0;
}

//  A b C d E
//  f G h I j
//  K l M n O
//  p Q r S t
//  U v W x Y