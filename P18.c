#include <stdio.h>

int main() {
    int arr[10], n, i, value, found = 0;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            found = 1;
            break;
        }
    }

    if(found) {
        
        for(int j = i; j < n-1; j++) {
            arr[j] = arr[j+1];
        }
        n--;
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Value not found in array.\n");
    }

    return 0;
}
