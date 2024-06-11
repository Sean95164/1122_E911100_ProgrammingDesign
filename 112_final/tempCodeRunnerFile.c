#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NMAX 11

int mat1[NMAX][NMAX];
int mat2[NMAX][NMAX];
int result[NMAX][NMAX];

void printMat(int m, int n, int mat[m][n]) {
    for (int i = 0; i < m; i++) {
        printf("%d", mat[i][0]);
        for (int j = 1; j < n; j++) {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            result[i][j] = 0;
            mat1[i][j] = 0;
            mat2[i][j] = 0;
        }
    }

    int x;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            for (int p = 0; p < n; p++) {
                result[i][j] += mat1[i][p] * mat2[p][j];
            }
        }
    }

    // Output
    printf("m1:\n");
    printMat(m, n, mat1);

    printf("m2:\n");
    printMat(n, k, mat2);

    printf("m1m2:\n");
    printMat(m, k, result);
    return 0;
}