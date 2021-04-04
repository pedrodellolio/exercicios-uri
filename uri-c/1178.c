#include <stdio.h>

#define A 100

int main(void) {
    double X, N[A];
    scanf("%lf", & X);
    N[0] = X;
    printf("N[0] = %.4f\n", X);
    for (int i = 1; i < A; i++) {
        N[i] = N[i - 1] / 2;
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
    return 0;
}