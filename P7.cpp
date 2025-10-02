#include <stdio.h>

int main() {
    int a[4][4], transpose[4][4];
    int i, j;

    
    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
    printf("\nTranspose Matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
