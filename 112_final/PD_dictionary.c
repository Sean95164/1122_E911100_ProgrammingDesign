#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool func(char s1[], char s2[]) {
    // true for s1 < s2, false for s1 >= s2
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int min_len = len1;
    if (len2 < len1) min_len = len2;

    for (int i = 0; i < min_len; i++) {
        if (s1[i] < s2[i]) return true;
        else if (s1[i] > s2[i]) return false;
    }

    // same
    if (len1 <= len2) return true;
    else return false;
}

void swap(char s[][100], int i, int j) {
    char temp[100];
    strcpy(temp, s[j]);
    strcpy(s[j], s[i]);
    strcpy(s[i], temp); 
}

void insertion_sort(int n, char s[][100]) {
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (func(s[i], s[j])) {
                swap(s, i, j);
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    char s[n][100];

    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    insertion_sort(n, s);

    for (int i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    }
    return 0;
}