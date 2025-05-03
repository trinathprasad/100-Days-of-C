#include <stdio.h>

int main() {
    int n, r, c;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (r = 0; r < n; r++) {  // Loop through rows
        for (c = 0; c < n; c++) {  // Loop through columns
            if (c % 2 == 0) {  
                printf("%2c ", 'A' + r);  // Uppercase for even columns
            } else {
                printf("%2c ", 'a' + r);  // Lowercase for odd columns
            }
        }
        printf("\n");  // Move to the next line
    }
    
    return 0;
}
A  a  A  a  A 
B  b  B  b  B
C  c  C  c  C
D  d  D  d  D
E  e  E  e  E