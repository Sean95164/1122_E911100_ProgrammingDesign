#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main(){
    double n;
    scanf("%lf", &n);

    int stop = (int)(sqrt(n) + 1);
    bool isPrime = true;

    for(int i=2; i<stop; i++){
        if((int)n == 1 || (int)n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }

    return 0;
}