#include <stdio.h>

#define A 20
int main() {
    int aux, N[A];
    for (int i = 0; i < A; i++) {
        scanf("%d", & N[i]);
    }

    for (int i = 0; i < A / 2; i++) {
        aux = N[(A / 2) + (A / 2 - (i + 1))];
        N[(A / 2) + (A / 2 - (i + 1))] = N[i];
        N[i] = aux;
    }

    for (int i = 0; i < A; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}