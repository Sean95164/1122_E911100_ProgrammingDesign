#include <stdio.h>
#include <stdlib.h>

int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    if (a == b) {
        printf("tie\n");
    }
    else if (
        (a == 'R' && b == 'S') ||
        (a == 'P' && b == 'R') ||
        (a == 'S' && b == 'P') 
    ) {
        printf("A win\n");
    }
    else {
        printf("B win\n");
    }
    return 0;
}