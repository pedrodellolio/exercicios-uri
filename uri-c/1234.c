#include <stdio.h>

#include <ctype.h>

#include <string.h>


int main(void) {

    char linha[128];
    int Maiuscula = 1;
    int tam, i;

    while (gets(linha) != NULL) {
        Maiuscula = 1;
        tam = strlen(linha);
        for (i = 0; i < tam; i++) {
            if (isalpha(linha[i])) {
                linha[i] = Maiuscula ? toupper(linha[i]) : tolower(linha[i]);
                Maiuscula = !Maiuscula;
            }
        }

        printf("%s\n", linha);

    }

    return 0;
}