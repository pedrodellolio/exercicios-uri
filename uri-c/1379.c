#include <stdio.h>

int medianaMinima(int a, int b) {
    int aux;
    if (b < a) {
        aux = b;
        b = a;
        a = aux;
    }
    return 2 * a - b;
}

int main(void) {
    int a, b, c, mediana;
    scanf("%d %d", & a, & b);
    while (a > 0 && b > 0) {
        mediana = medianaMinima(a, b);
        printf("%d\n", mediana);
        scanf("%d %d", & a, & b);
    }
    return 0;
}