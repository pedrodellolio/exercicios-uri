#include <stdio.h>

#define A 10
int main() {
    int V, N[A];
    scanf("%d", & V);
    N[0] = V;
    printf("N[%d] = %d\n", 0, N[0]);
    for (int i = 1; i < A; i++) {
        N[i] = 2 * N[i - 1];
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}