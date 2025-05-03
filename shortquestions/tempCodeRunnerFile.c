#include <stdio.h>
int main() {
    int i = 0;
    for ( ; i < 5 ; ) {  // No initialization and update expression in for loop
        if (i < 5)
            printf("Hello", i++);  // Prints "Hello" and increments i
        else
            continue;  // This will never execute
        printf("World");  // Prints "World"
    }
    return 0;
}
