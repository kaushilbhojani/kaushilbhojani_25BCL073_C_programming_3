#include <stdio.h>

int main() {
    int arr[10], n, i, value, found = 0;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            printf("Value %d found at position %d\n", value, i+1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Value not found in array.\n");
    }

    return 0;
}
