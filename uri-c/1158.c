#include <stdio.h>

int somaImpares(int n1, int n2) {
    int soma = 0;
    int aux = n1;
    if (n1 % 2 == 0) {
        aux += 1;
    }
    for (int i = 1; i <= n2; i++) {
        soma += aux;
        aux += 2;
    }

    return soma;
}

int main(void) {
    int i, n, x, y;
    scanf("%d", & n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", & x, & y);
        printf("%d\n", somaImpares(x, y));
    }
    return 0;
}