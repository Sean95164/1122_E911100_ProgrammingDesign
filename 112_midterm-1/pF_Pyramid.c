#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int row = 2 * n - 1;
    for (int i = 0; i < row/2; i++){
        for (int j = 1 ; j <= i+1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++){
        printf("*");
    }

    printf("\n");
    for (int i = row/2; i > 0; i--){
        for (int j = i ; j >=1 ; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}