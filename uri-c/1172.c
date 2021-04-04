#include <stdio.h>

#define N 10
int main() {
    int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", & X[i]);
        if (X[i] < 0 || X[i] == NULL) {
            X[i] = 1;
        }
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}