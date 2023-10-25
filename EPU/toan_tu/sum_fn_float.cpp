#include <stdio.h>
#include <conio.h>

/* fn = Sum(2^n/n!) */

int main() {
    int i, n;
    printf("Input n = ");
    scanf("%d", &n);
    float fn = 0;

    if (n <= 0) {
        printf("f(%d) = 0", n);
    } else {
        int nu_num = 1;
        int de_num = 1;
        for (i = 1; i <= n; i++) {
            nu_num *= 2;
            de_num *= i;
            fn += (float)nu_num / de_num;
        }
        printf("f(%d) = %f", n, fn);
    }
}

