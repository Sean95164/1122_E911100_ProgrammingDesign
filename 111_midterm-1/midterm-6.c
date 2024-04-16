#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPrime(const int num) {
    if (num == 0 || num == 1) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int power(const int n) {
    int number = 1;
    for (int i = 0; i < n; i++) {
        number *= 10;
    }
    return number;
}

bool goodNumber(int n) {
    bool odd = true, isGood = true;
    while (n != 0) {
        int first = n % 10;
        if (odd) {
            if (!isPrime(first)) {
                isGood = false;
            }
        }
        else {
            if (first % 2 != 0) {
                isGood = false;
            }
        }

        n /= 10;
        odd = !odd;
    }

    return isGood;
}

int main() {
    int n, upper;
    scanf("%d", &n);

    int cnt = 0;
    upper = power(n);
    for (int i = 1; i < upper; i++) {
        if (goodNumber(i)) {
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}