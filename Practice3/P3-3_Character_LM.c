#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char s[100];
        scanf("%s", s);
        int L = strlen(s);
        int M = 0;
        for (int j = 0; j < L; j++) {
            if ((s[j] >= 'a' && s[j] <= 'z') ||
                (s[j] >= 'A' && s[j] <= 'Z')
            ) M++;
        }

        printf("L=%d\nM=%d\n", L, M);
    }


    return 0;
}