#include <stdio.h>

#define N 12

int main(void) {
    int L;
    char T;
    double M[N][N], soma;

    scanf("%d\n", & L);
    scanf("%c", & T);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", & M[i][j]);
        }
    }

    for (int j = 0; j < N; j++) {
        soma = soma + M[L][j];
    }

    if (T == "S") {
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma / N);
    }

    return 0;
}