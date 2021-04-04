#include <stdio.h>

int main() {
    int interGols = 0, gremioGols = 0, interVitorias = 0, gremioVitorias = 0, empates = 0, num = 1, jogos = 0;

    while (num == 1) {
        scanf("%d %d\n", & interGols, & gremioGols);
        jogos++;
        if (interGols > gremioGols) {
            interVitorias++;
        } else {
            gremioVitorias++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d\n", & num);

    }

    printf("%d grenais\n", jogos);
    printf("Inter:%d\n", interVitorias);
    printf("Gremio:%d\n", gremioVitorias);
    printf("Empates:%d\n", empates);
    if (interVitorias > gremioVitorias) {
        printf("Inter venceu mais\n");
    } else if (gremioVitorias > interVitorias) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }

    return 0;
}