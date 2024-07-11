#include <stdio.h>

int getMonth();
int fab(int num);
void printResult(const int month);

int main() {
    int month = getMonth();
    printResult(month);
}

int getMonth() {
    int month = 0;
    printf("Input: ");
    scanf("%d", &month);
    return month;
}

int fab(int num) {
    if (num < 2) {
        return 1;
    }
    return fab(num - 1) + fab(num - 2);
}

void printResult(const int month) {
    printf("Output: %d\n", fab(month));
}