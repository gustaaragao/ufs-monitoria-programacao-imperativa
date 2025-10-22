#include <stdio.h>

const double EPS = 1e-9;

int main() {
    double max, v;
    scanf("%lf", &max);
    scanf("%lf", &v);
    double valor = 0.0;
    int pontos = 0;
    if (v > max) {
        // double porcentagem = (v - max) / max;
        // if (porcentagem - 0.5 > EPS) {
        //     valor = 574.62;
        //     pontos = 7;
        //     valor = 574.62;
        //     pontos = 7;
        // } else if (porcentagem - 0.2 > EPS) {
        //     valor = 127.69;
        //     pontos = 5;
        // } else {
        //     valor = 85.13;
        //     pontos = 4;
        // }
        if (v > 0.5 * max + max) {
            valor = 574.62;
            pontos = 7;
        } else if (v > 0.2 * max + max) {
            valor = 127.69;
            pontos = 5;
        } else {
            valor = 85.13;
            pontos = 4;
        }
    }
    printf("%.2lf\n", valor);
    printf("%d\n", pontos);
    return 0;
}