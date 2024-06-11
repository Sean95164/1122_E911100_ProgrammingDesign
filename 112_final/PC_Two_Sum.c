#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        int ans1 = i, ans2 = -1;
        for (int j = i+1; j < n; j++) {
            if (arr[j] == target - arr[ans1]) {
                ans2 = j;
            }
        }

        if (ans2 != -1) {
            printf("%d %d\n", ans1, ans2);
        }
    }
    return 0;
}