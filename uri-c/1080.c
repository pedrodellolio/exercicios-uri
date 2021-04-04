#include <stdio.h>

int main(void) {
    int maior = 0;
    int pos;
    int vetorN[100];
    for (int i = 0; i < 100; i++) {
        scanf("%d\n", & vetorN[i]);
        if (vetorN[i] > maior) {
            maior = vetorN[i];
            pos = i + 1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}