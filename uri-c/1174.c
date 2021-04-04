#include <stdio.h>

#define N 100
int main() {
    float A[N];
    for (int i = 0; i < N; i++) {
        scanf("%f", & A[i]);
        if (A[i] <= 10) {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}