#include <stdio.h>

int main() {
    char nome[50]; scanf("%s", nome);
    double salario, vendas; scanf("%lf %lf", &salario, &vendas);
    salario += vendas * 0.15;
    printf("TOTAL = R$ %.2lf\n", salario);
    return 0;
}