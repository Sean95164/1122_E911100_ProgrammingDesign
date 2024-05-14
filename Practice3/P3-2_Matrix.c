#include <stdio.h>
#include <stdlib.h>

void swap(int mat[][5], int i, int j) {
    int temp = mat[i][j];
    mat[i][j] = mat[j][i];
    mat[j][i] = temp;
}

int main() {
    int mat[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i <= j) continue;
            swap(mat, i, j);
        } 
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("%d\n", mat[i][4]);
    } 
    return 0;
}