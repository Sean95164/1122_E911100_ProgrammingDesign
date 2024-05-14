#include <stdio.h>
#include <stdlib.h>
#define INF 1e8

int main() {
    int num[5];
    int sum = 0, minN = INF, maxN = -INF;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
        if (num[i] < minN) minN = num[i];
        if (num[i] > maxN) maxN = num[i];
    }

    double mean = sum / 5.0;

    printf("%d %.1lf %d %d", sum, mean, maxN, minN);
    return 0;
}