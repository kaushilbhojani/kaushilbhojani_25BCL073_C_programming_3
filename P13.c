#include <stdio.h>

int main() {
    int arr[11];  
    int n, i, pos, newNum;


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

    
    printf("Enter number to insert: ");
    scanf("%d", &newNum);
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return 0;
    }

    
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    
    arr[pos-1] = newNum;
    n++; 

   
    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
