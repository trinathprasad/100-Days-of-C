/* #include<stdio.h>
int main()
{
  int i=10;
  
  i=!i>14;
  printf("%d",i);
  return 0;
}  ans:- 0 */  


/* #include<stdio.h>
int main()
{
  printf("%d", 2+3 * 4+5 == 45);
  printf("%d", 2+3 * 4+5 == 19);
  printf("%d", (2+3) * (4+5) == 45);

  return 0;
  ans:- 0 1 1
} */


/* #include <stdio.h>
int main()
{
  int a=1, b=4, c=10;
  c=a=10 == b+6;
  printf("a=%d, b=%d, c=%d", a,b,c);
  return 0;
} ans:- 1 4 1 */


/* #include<stdio.h>
int main()
{
  printf("%d", 5 && 3);
  printf("%d", 0 || -3);
  return 0;
} ans:- 1 1 */


/* #include<stdio.h>
int main()
{
  float a,b,c,d;
  printf("%f" , a=5/2);
  printf("%f", b=5/2.0);
  printf("%f", c=5.0/2);
  printf("%f", d=5.0/2.0);
  return 0;
} ans:- 2.000000 2.500000 2.500000 2.500000 */



/* #include<stdio.h>
int main()
{
  int x=1, y=0, z=5;
  int a=x && y && z++;
  printf("%d", z);
  return 0;
} ans:-5 */


/* #include <stdio.h>
int main()
{
  int a=5;
  int b=4;
  a+= b%a;
  printf("%d",a);
  return 0;
} ans:- 9 */


/* #include<stdio.h>
int main()
{
  int a=3 , b=4, c=0;
  int res = !a || !b && !c;
  printf("%d", res);
  return 0;
} ans :- 0 */


/* #include <stdio.h>
int main()
{
  char ch ='D';
  printf("%c", ch && 'Z' ? ch + 3 : ch - 2);
  return 0;
} ans:- G */


/* #include <stdio.h>
int main()
{
    char ch1 = 127;
    printf("%d",ch1);
    
    char ch2 = 130;
    printf(" %d",ch2);
  
  return 0;
} ans :- 127  -126  */





/* #include <stdio.h>

int main() {
    printf("%d", printf("%d", printf("Hello")) );
    return 0;
} ans:- Hello51 */



/* #include<stdio.h>
int main()
{
  printf("\n The number is %07d",1212);
  return 0;
} ans :- The number is 0001212 */




/* #include <stdio.h>
int main()
{
    int i;
    i = 1, 2, 3;     
    printf("%d", i);
    return 0;
} ans :-   1 || if the numbers are in a bracket(1,2,3) then the i= 3 */


/* #include<stdio.h>
int main()
{
    int k=1;
    printf("%d == 1 is" "%s", k, k==1?"TRUE":"FALSE");
    return 0;
} ans :- 1 == 1 is True */




/* #include<stdio.h>
int main()
 {
     char c = 'A';
     printf("%d %c", c+32, c+32);
     return 0;
} ans- 97 a */




/* #include <stdio.h>
int main() 
{ 
      int k,num=30; 
      k=(num>5?(num<=10?100:200):500); 
      printf("%d %d",num,k); 
      return 0;
} ans-  30  200 */




/* #include<stdio.h>
int main() 
{ 
      int i = 0, j = 1, k = 2, m; 
      m = i++ || j++ || k++; 
      printf("%d %d %d %d", m, i, j, k);
      return 0; 
} ans- 1 1 2 2 */


/* #include <stdio.h>
int main() {
    int x = 5, y = 2, z;
    z = x / y * x % y;
    printf("%d\n", z);
    return 0;
} vscode- 0 / chat gpt- 2 */


/* #include <stdio.h>
int main()
{
    int a = 8;
    double b = 2.6;
    int c;
    c = a + b;
    printf("%d", c);
    return 0;
} ans- 10 */


/* #include <stdio.h>
int main()
{
  int a,b=2,c;
  a=2*(b++);
  c=2*(++b);
  printf("a=%d, b=%d, c=%d",a,b,c);
  return 0;
} ans- 4 4 8 */



/* #include <stdio.h>
int main()
{
    int x = 4, y = 2;
    x /= x / y;
    printf("%d\n", x);
    return 0;
}
ans- 2 */




/* #include <stdio.h>
  void main()
  {   
    int x=(20 || 40 ) && (10);
    printf("x= %d",x);
  }
x=1 */




/* #include<stdio.h>
int main() {
int x = 15;
int y = 2;
int z = x / y + x % y;
printf("z = %d\n", z);
return 0;
} z=8 */


// #include<stdio.h>
// int main()
// {
//   int x=10, y=20;
//   int z=(x>y)?x:y;
//   printf("%d", z);
//   return 0;
// }



// #include<stdio.h>
// int main()
// {
//   int sub[50],i;
//   for(i=0;i<=48;i++);
//   {
//     sub[i]=i;
//     printf("\n%d",sub[i]);
//   }
//   return 0;
// }