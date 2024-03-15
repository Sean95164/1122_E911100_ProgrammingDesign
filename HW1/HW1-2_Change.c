#include <stdio.h>
#include <stdlib.h>

int main(){
    char cha;
    scanf("%c", &cha);
    cha = cha - ('A' - 'a');

    printf("%c", cha);
    return 0;
}