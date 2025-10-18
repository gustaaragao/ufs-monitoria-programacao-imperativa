#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    double horas, valor; scanf("%lf %lf", &horas, &valor);
    double salario = horas * valor;

    printf("NUMBER = %d\n", n);
    printf("SALARY = %.2lf\n", salario);

    return 0;
}