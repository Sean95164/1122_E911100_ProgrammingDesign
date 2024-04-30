#include <stdio.h>
#include <stdlib.h>
const int INF = 1e9;
int main() {
    int arr[100];
    int size = 5;

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = -INF;
    int min = INF;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("%d %d %d", min, max, max - min);
    return 0;
}
