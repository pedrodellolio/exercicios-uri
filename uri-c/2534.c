#include<stdio.h>

#include<stdlib.h>

#include<string.h>

void lerVetor(int vetor[], int num) {
    for (int i = 0; i < num; i++) {
        scanf("%d", & vetor[i]);
    }
}

int compint(const void * pa,
    const void * pb) {
    int a = * (int * ) pa;
    int b = * (int * ) pb;
    if (a < b) {
        return 1;
    } else if (a > b) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int n, q, pos, i;
    int notas[200];
    while (scanf("%d %d", & n, & q) == 2) {
        lerVetor(notas, n);
        qsort(notas, n, sizeof(int), compint);
        for (i = 0; i <= q - 1; i = i + 1) {
            scanf("%d", & pos);
            printf("%d\n", notas[pos - 1]);
        }
    }
    return 0;
}