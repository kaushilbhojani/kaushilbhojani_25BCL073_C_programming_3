#include <stdio.h>

int main() {
    int arr[11]; 
    int n, i, newNum;

  
    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    if(n > 10) {
        printf("Error: Maximum size is 10.\n");
        return 0;
    }

  
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    printf("Enter number to insert at beginning: ");
    scanf("%d", &newNum);

  
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }


    arr[0] = newNum;
    n++; 


    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
