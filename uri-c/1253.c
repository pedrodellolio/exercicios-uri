#include<stdio.h>

#include<stdlib.h>

#include<string.h>

void caesar(char texto[], int deslocamento) {
    int aux;
    for (int i = 0; i < strlen(texto); i++) {
        aux = texto[i];
        if (aux >= 'A' && aux <= 'Z') {
            aux -= deslocamento;
            texto[i] = aux;
        }
        if (aux < 'A') {
            aux = 'Z' + 1 - ('A' - aux);
            texto[i] = aux;
        }
    }
}

int main() {
    int n, i;
    char frase[1000];
    int deslocamento;

    scanf("%d\n", & n);
    for (i = 1; i <= n; i = i + 1) {
        scanf("%[^\n]%*c", frase);
        scanf("%d\n", & deslocamento);
        caesar(frase, deslocamento);
        printf("%s\n", frase);
    }
    return 0;
}