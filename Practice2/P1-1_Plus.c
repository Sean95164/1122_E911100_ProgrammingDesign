#include <stdlib.h>
#include <stdio.h>

int main(){
    int stop;
    scanf("%d", &stop);
    int sum = 0;
    for(int i=1; i<=stop; i+=2){
        sum += i;
    }
    printf("%d", sum);

    return 0;
}