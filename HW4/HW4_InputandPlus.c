#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int sum = 0;
    while(scanf("%d", &n)){
        if(n > 9 || n < 1){
            printf("Error");
            break;
        }

        sum += n*n;

        if(sum > 150){
            printf("%d", sum);
            break;
        }
    }

    return 0;
}