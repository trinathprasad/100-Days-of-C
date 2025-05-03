#include <stdio.h>
int main() {
    int arr[100], count,n;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    
        if (count % 2 == 1) {
            printf("The element occurring odd number of times is: %d\n", arr[i]);
            return 0; 
    }
}

    printf("Element Not Found\n");
    return 0;
}
