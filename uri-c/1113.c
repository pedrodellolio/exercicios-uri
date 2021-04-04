#include <stdio.h>

void cresc_descr(int n1, int n2) {
    if (n1 > n2) {
        printf("Decrescente\n");
    } else {
        printf("Crescente\n");
    }
}

int main(void) {
    int x, y;
    while (scanf("%d %d", & x, & y) == 2 && x != y)
        cresc_descr(x, y);
    return 0;
}