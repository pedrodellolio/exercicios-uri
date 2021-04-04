#include <stdio.h>

#define N 12

int main() {
    char O;
    double M[N][N], soma = 0;
    int cont = 0;

    scanf("%c", & O);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", & M[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            soma += M[i][j];
            cont++;
        }
    }

    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma / cont);
    }

    return 0;
}