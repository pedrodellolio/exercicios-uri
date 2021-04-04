#include <stdio.h>

int main() {
    int N, j = 1;
    scanf("%d", & N);

    for (int i = 1; i <= N; i++) {
        printf("%d %d %d PUM\n", j, j + 1, j + 2);
        j = j + 4;
    }
    return 0;
}
