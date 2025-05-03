// #include<stdio.h>
// void main()
// {
// int i, j;
// for(i=5, j=1; i>j; i--, ++j)
// printf(" %d %d",i,j);
// }



// 


// int main(){
//   int i = 0;
//   for (i = 0;i < 5; i++)
//   if (i < 4)
//   {
//   printf("Hello");
//   break;
//   }
//   return 0;
//   }




// #include <stdio.h>
// void main()
// {
// int k = 0;
// for (k < 3; k++)
// printf("Hello");
// }  



// #include <stdio.h>
// int main() {
// int i, j;
// for(i = 1; i <= 3; i++) {
// for(j = 1; j <= 2; j++) {
// if(i == j) {
// break;
// }
// printf("%d%d ", i, j);
// }
// }
// return 0;
// }   



// #include <stdio.h>

// int main() {
// int sum = 0;

// for (int i = 1, j = 10; i <= 5 && j >= 6; i++, j--) {
// sum += i + j;
// }

// printf("Sum = %d\n", sum);

// return 0;
// }      




// #include <stdio.h>
// int main() {
//     int i = 0;
//     for ( ; i < 5 ; ) {  // No initialization and update expression in for loop
//         if (i < 5)
//             printf("Hello", i++);  // Prints "Hello" and increments i
//         else
//             continue;  // This will never execute
//         printf("World");  // Prints "World"
//     }
//     return 0;
// }


// #include <stdio.h>
// void main()
// {
// int k;
// for (k = -3; k < -5; k++)
// printf("Hello");
// }

// #include<stdio.h>
// void main()
// {
// int i, j;
// for(i=0,j=0;i<10,j<20;i++,j++){
// continue;
// }
// printf("i=%d %t j=%d", i, j);
// }

// #include<stdio.h>
// int main()
// {
// int i;
// for (i = 0; i < 5; i++)
// {
// if (i == 3)
// continue;
// printf("%d ", i);
// }

// }


// #include<stdio.h>
// int main()
// {
// for(int i = 0; i < 5; i++)
// for(int j = 0; j < 3; j++)
// printf("%d ", j);

// }


// #include <stdio.h>
// int main() {
// for( ; ; )
// {
// printf("Welcome to NIT ");
// }

// return 0;
// } /*Print infinite times*/



// #include<stdio.h>
// void main()
// {
// int i = -10;
// for(;i;printf("%d ", i++));
// }




// #include<stdio.h>
// int main()
// {

// for(int i = 1; i <= 3; i++)
// for(int j = 1; j <= 3; j++)
// printf("%d ", i + j);

// }



// #include<stdio.h>
// int main()
// {
// for(int i = 1; i <= 5; printf("%d ", i++))
// continue;
// }



// #include <stdio.h>
// int main() {
// int i, sum = 0;
// for (i = 1; i <= 5; i++)
// {
// if (i % 2 == 0) {
// continue;
// }
// sum += i;
// }
// printf("%d", sum);
// return 0;
// }



// #include <stdio.h>
// void main()
// {
// int digit = 0;
// for( ; digit <= 9; )
// digit++;
// digit *= 2;
// --digit;

// printf("%d",digit);
// }    



// int main()

// {
// int i = 0;
// for (; ; )
// printf("naresh it\n");
// printf("Naresh It\n");
// } /*infinite loops*/




// #include<stdio.h>
// int main()
// {
// for(int i = 1; i <= 3; i++) {
// for(int j = 1; j <= i; j++) {
// printf("%d ", j);
// }
// }

// }





// #include <stdio.h>
// #include <stdbool.h>
// int main() {
// for(int i = 0; true; i++){
// printf("%d ",i);
// if(i == 10) break;
// }

// return 0;
// }




// #include <stdio.h>
// int main() {
// int sum = 0;
// for (int i = 1; i <= 5; sum += i, i++);
// printf("Sum = %d\n", sum);
// return 0;
// }  





// int main()
// {
// int a = 0, i = 0, b;
// for (i = 0;i < 5; i++)
// {
// continue;
// a++;
// }
// printf("%d",a);
// }




// #include <stdio.h>
// int main() {
//     int i;
//     for (printf("Hello "); printf("Know "); printf("Program ")) {
//         break;
//     }
//     return 0;
// }






// #include<stdio.h>
// int main()
// {
// for(int i = 0; ; i++) {
// if(i > 5) break;
// printf("%d ", i);
// }

// }




