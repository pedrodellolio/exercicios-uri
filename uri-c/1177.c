#include <stdio.h>

#define A 1000
int main() {
    int T, N[A];
    scanf("%d", & T);
    int j = 0;
    for (int i = 0; i < A; i++) {
        if (j > T - 1) {
            j = 0;
        }
        N[i] = j;
        j++;
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}