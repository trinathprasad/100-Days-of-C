#include <stdio.h>
#include <ctype.h>  // For tolower()

int main() {
    char str[100];
    char *ptr;
    int vowels = 0, consonants = 0;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin); 

    ptr = str;

    while (*ptr != '\0') {
        if (isalpha(*ptr)) { 
            char ch = tolower(*ptr);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        ptr++; 
    }

    printf("\nNumber of vowels : %d\n", vowels);
    printf("Number of consonants : %d\n", consonants);

    return 0;
}
