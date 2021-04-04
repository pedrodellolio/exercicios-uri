#include<stdio.h>

#include<stdlib.h>

#include<math.h>

typedef struct {
    double x, y;
}
TPonto;

void lerPonto(TPonto * p) {
    scanf("%lf %lf", & ( * p).x, & ( * p).y);
}

double distancia(TPonto p1, TPonto p2) {
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

int main() {
    int n, i;
    TPonto p1, p2;
    double dist;

    lerPonto( & p1);
    lerPonto( & p2);
    dist = distancia(p1, p2);
    printf("%.4f\n", dist);

    return 0;
}