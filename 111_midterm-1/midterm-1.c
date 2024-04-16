#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[100];
    while (scanf("%s", a)) {
        int dec = 0;
        int i, power = 1;
        for (i = strlen(a) - 1; i >= 0; i--){
            if (a[i] == '1'){
                dec += power;
            }
            power <<= 1;
        }

        printf("%d\n", dec);

    }

    
    return 0;
}