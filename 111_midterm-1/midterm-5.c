#include <stdio.h>
#include <stdlib.h>

int main() {
    char cha;
    scanf("%c", &cha);

    if (cha >= 'a' && cha <= 'z') {
        printf("The character is a lowercase letter.");
    }
    else if (cha >= 'A' && cha <= 'Z') {
        printf("The character is an uppercase letter.");
    }
    else if (cha >= '0' && cha <= '9') {
        printf("The character is a digit.");
    }
    else {
        printf("The character is a symbol.");
    }
}