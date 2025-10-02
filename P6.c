#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

   
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    
    if(n != p) {
        printf("Matrix multiplication not possible! (Columns of 1st != Rows of 2nd)\n");
        return 0;
    }

    int a[m][n], b[p][q], product[m][q];

    
    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            product[i][j] = 0;
        }
    }

    
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < n; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    
    printf("\nResultant Matrix (Product):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
