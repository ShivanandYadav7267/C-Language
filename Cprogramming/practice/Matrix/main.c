


#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], mult[10][10];
    int i, j, k, r, c;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    if (r > 10 || c > 10) {
    printf("Error: Maximum allowed size is 10x10.\n");
    return 1; // Exit the program
}


    // Input elements of matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Matrix Multiplication
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            mult[i][j] = 0;
            for (k = 0; k < c; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}