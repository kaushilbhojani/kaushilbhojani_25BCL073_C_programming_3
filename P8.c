#include <stdio.h>

int main() {
    int source[5], dest[10];
    int i, j = 0;


    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &source[i]);
    }


    for(i = 0; i < 10; i++) {
        dest[i] = 0;
    }


    for(i = 0; i < 5; i++) {
        dest[j] = source[i];
        j += 2;
    }


    printf("\nDestination array (10 elements):\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", dest[i]);
    }

    return 0;
}
