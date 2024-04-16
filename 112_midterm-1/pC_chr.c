#include <stdio.h>
#include <stdlib.h>

int main() {
    char cha;
    scanf("%c", &cha);

    if (cha >= 'A' && cha <= 'Z'){
        printf("uppercase letter");
    }
    else if (cha >= 'a' && cha <= 'z') {
        printf("lowercase letter");
    }
    else if (cha >= '0' && cha <= '9') {
        printf("digit");
    }
    else {
        printf("symbol");
    }
    return 0;
}