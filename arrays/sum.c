#include <stdio.h>

int main() {
    int arr[5];   // declare array of size 5
    int i, sum = 0;

    // Input elements
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Output result
    printf("Sum of elements = %d\n", sum);

    return 0;
}
