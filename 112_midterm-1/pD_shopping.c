#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int money[] = {1000, 500, 100, 50, 10, 5, 1};
    int remain = k - n;

    if (remain <= 0) {
        printf("not enough");
    }
    else {
        for(int i = 0; i <= 6; i++) {
            int notes = remain / money[i];
            remain -= notes * money[i];
            if (i == 0)
                printf("%d", notes);
            else {
                printf(" %d", notes);
            }
        }

    }

    return 0;
}