#include <stdio.h>
#include <stdlib.h>

int main(){
    double a, b;
    char sign;
    scanf("%lf %lf %c", &a, &b, &sign);

    switch (sign){
        case '+':
            printf("%.1lf", a+b);
            break;
        case '-':
            printf("%.1lf", a-b);
            break;
        case '*':
            printf("%.1lf", a*b);
            break;
        case '/':
            if (b == 0.0) return -1;
            printf("%.1lf", a/b);
            break;
    }


    return 0;
}