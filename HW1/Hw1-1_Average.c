#include <stdlib.h>
#include <stdio.h>

int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.4lf", (a+b+c)/3);
    return 0;
}