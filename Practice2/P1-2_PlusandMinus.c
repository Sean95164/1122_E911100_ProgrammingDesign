#include<stdio.h>
#include<stdlib.h>

int main(){
    int stop;
    scanf("%d", &stop);
    int sign = 1;

    int sum = 0;
    for(int i=1;i<=stop;i++){
        sum += i*i*sign;
        sign = -sign;
    }

    printf("%d", sum);

    return 0;
}