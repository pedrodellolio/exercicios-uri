#include<stdio.h>

#include<stdlib.h>

#include<math.h>

#define RAIZ_1 1
#define RAIZ_2 2

typedef struct {
    double a, b, c;
}
TEq2G;

void ler(TEq2G * eq) {
    scanf("%lf %lf %lf", & ( * eq).a, & ( * eq).b, & ( * eq).c);
}

double delta(TEq2G eq) {
    return pow((eq).b, 2) - 4 * (eq).a * (eq).c;
}

double raiz(TEq2G eq, int r) {
    if (r == 1) {
        return (-eq.b + sqrt(delta(eq))) / (2 * eq.a);
    } else {
        return (-eq.b - sqrt(delta(eq))) / (2 * eq.a);
    }
}

int main() {
    int n, i;
    TEq2G eq;
    ler( & eq);

    if (eq.a == 0 || delta(eq) <= 0)
        printf("Impossivel calcular\n");
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n", raiz(eq, RAIZ_1), raiz(eq, RAIZ_2));

    return 0;
}