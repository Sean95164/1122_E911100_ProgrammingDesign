#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int a, int b) {
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void sort(int arr[], int a, int b) {
    for (int i = a + 1; i < b; i++) {
        for (int j = i; j - 1 >= a; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr, j, j-1);
            }
        }
    }
}

int main() {
    int arr[100];
    int size = 5;

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, 0, size);
    int max = arr[size - 1], min = arr[0];
    printf("%d %d %d", min, max, max - min);
    return 0;
}