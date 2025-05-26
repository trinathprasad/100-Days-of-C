#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[10];
    int *ptr = arr;

    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Input %d number of elements in the array : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of array is : %d\n", sum);

    return 0;
}
