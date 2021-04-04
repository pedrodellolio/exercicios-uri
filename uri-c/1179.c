#include <stdio.h>

int main(void) {
    int X, par[5], impar[5], qtdp, qtdi, i, j;

    qtdp = qtdi = 0;
    for (i = 0; i < 15; i++) {
        scanf("%d", & X);
        if (X % 2 == 0) {
            par[qtdp] = X;
            qtdp++;
            if (qtdp == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qtdp = 0;
            }
        } else {
            impar[qtdi] = X;
            qtdi++;
            if (qtdi == 5) {
                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qtdi = 0;
            }
        }

    }
    for (int j = 0; j < qtdi; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (int j = 0; j < qtdp; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }
    return 0;
}