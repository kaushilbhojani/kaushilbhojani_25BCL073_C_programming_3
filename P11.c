#include <stdio.h>

int main() {
    int arr[10], shifted[10] = {0};
    int i, n, choice;


    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter number of positions to shift: ");
    scanf("%d", &n);


    printf("Enter 1 for left shift, 2 for right shift: ");
    scanf("%d", &choice);

    if(choice == 1) {

        for(i = 0; i < 10 - n; i++) {
            shifted[i] = arr[i + n];
        }

    } else if(choice == 2) {

        for(i = 9; i >= n; i--) {
            shifted[i] = arr[i - n];
        }

    } else {
        printf("Invalid choice!\n");
        return 0;
    }


    printf("\nShifted Array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", shifted[i]);
    }

    return 0;
}
