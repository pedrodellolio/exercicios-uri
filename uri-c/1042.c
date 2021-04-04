#include<stdlib.h>

#include<stdio.h>

void ler(int * n1, int * n2, int * n3) {
    scanf("%d %d %d", & ( * n1), & ( * n2), & ( * n3));
}

void ordenar(int * n1, int * n2, int * n3) {
    int aux, i, j;
    int vetor[3] = {
        * n1,
        * n2,
        * n3
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (vetor[i] < vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    * n1 = vetor[0];
    * n2 = vetor[1];
    * n3 = vetor[2];

}

int main() {
    int a, b, c, i, x, y, z;

    ler( & a, & b, & c);
    x = a;
    y = b;
    z = c;
    ordenar( & x, & y, & z);
    printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", x, y, z, a, b, c);
    return 0;
}