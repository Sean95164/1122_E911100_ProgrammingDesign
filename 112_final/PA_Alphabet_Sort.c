#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap(char s[], int i, int j) {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

void insertion_sort(char s[]) {
    for (int i = 1; i < strlen(s); i++) {
        for (int j = 0; j < i; j++) {
            if (s[j] > s[i]) {
                swap(s, i, j);
            }
        }
    }
}
int main() {
    char s[100];
    scanf("%s", s);
    insertion_sort(s);
    printf("%s", s);
    return 0;
}