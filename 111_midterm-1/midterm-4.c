#include <stdio.h>
#include <stdlib.h>

int main(){
    double c, l, s_y, r;
    int y, o;
    scanf("C, l, Y, O, S_Y, r = %lf %lf %d %d %lf %lf", &c, &l, &y, &o, &s_y, &r);

    double d_y = c * 12;
    double t = d_y;
    double e = s_y;
    double d_i, s_i;

    int x = y;
    for (int i = y + 1; i <= o; i++) {
        d_i = d_y * (1.0 + l/100.0);
        t += d_i;
        d_y = d_i;
    }

    while (e < t) {
        s_i = s_y * (1.0 + r/100.0);
        e += s_i;
        s_y = s_i;
        x++;
    }

    if (x <= 60) printf("0");
    else if (x <= o) printf("%d", x);
    else printf("-1");

    return 0;
}