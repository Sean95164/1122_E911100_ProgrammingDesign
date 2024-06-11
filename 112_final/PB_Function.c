#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int func(int num) {
    return num*num - 7*num + 15;
}

int main() {
    int n;
    scanf("%d", &n);

    int fabi[10000];
    fabi[0] = 0;
    fabi[1] = 1;
    for (int i = 2; i < sizeof(fabi) / sizeof(int); i++) {
        fabi[i] = fabi[i-1] + fabi[i-2];
    }

    int x;
    while(n--) {
        scanf("%d", &x);
        printf("%d\n", func(fabi[x] % 19));
    }
    return 0;
}