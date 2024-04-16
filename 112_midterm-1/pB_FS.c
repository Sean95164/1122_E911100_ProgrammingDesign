#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    int fs[1000];
    scanf("%d", &n);
    fs[0] = 1;
    fs[1] = 1;
    for(int i = 2; i < n; i++) {
        fs[i] = fs[i-2] + fs[i-1];
    }

    for(int i = 0; i < n - 1; i++) {
        printf("%d ", fs[i]);
    }

    printf("%d", fs[n-1]);
    return 0;
}