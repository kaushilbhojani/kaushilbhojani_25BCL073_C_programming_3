#include <stdio.h>

int main() {
    int arr[5], n, i, temp;


    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);

    if(n > 5) {
        printf("Error: Maximum size is 5.\n");
        return 0;
    }


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }


    printf("\nReversed Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
