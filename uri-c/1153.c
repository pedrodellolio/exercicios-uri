#include <stdio.h>

int main() {
    int N;
    int factorial = 1;

    scanf("%d", & N);

    for (int i = 1; i <= N; i++) {
        factorial *= N - (i - 1);
    }
    printf("%d\n", factorial);

    return 0;
}