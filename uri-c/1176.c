#include <stdio.h>

int main(void) {
    int T, N, num;
    long long int fib[60];

    scanf("%d", & T);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < T; i++) {
        scanf("%d", & num);
        printf("Fib(%d) = %lld\n", num, fib[num]);
    }
    return 0;
}