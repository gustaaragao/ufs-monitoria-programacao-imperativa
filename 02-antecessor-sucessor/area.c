#include <stdio.h>

const double PI = 3.14159;

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);    

    // Letra a
    printf("TRIANGULO: %.3lf\n", (a*c)/2);
    // Letra b
    printf("CIRCULO: %.3lf\n", PI*c*c);
    // Letra c
    printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2);
    // Letra d
    printf("QUADRADO: %.3lf\n", b*b);
    // Letra e
    printf("RETANGULO: %.3lf\n", a*b);

    return 0;
}