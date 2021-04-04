#include <stdio.h>

#define N 5

void ler5Cartas(int vetor[]) {
    for (int i = 0; i < N; i++) {
        scanf("%d", & vetor[i]);
    }
}

char cresc_descr_nulo(int vetor[]) {
    int cont = 0;
    for (int i = 1; i < N; i++) {
        (vetor[i - 1] < vetor[i]) ? cont++ : cont--;
    }
    if (cont == N - 1) {
        return 'C';
    } else if (cont == -N + 1) {
        return 'D';
    } else {
        return 'N';
    }
}

int main(void) {
    int vet[5];
    char letra;
    ler5Cartas(vet);
    letra = cresc_descr_nulo(vet);
    printf("%c\n", letra);
    return 0;
}