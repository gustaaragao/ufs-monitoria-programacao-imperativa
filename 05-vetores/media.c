#include <stdio.h>

int main() {
    float notas[20001];
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }

    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }

    float media = soma / n;
    int contador_acima = 0, contador_abaixo = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] > 1.1 * media) { // notas[i] > 1.1 * media
            // 10 % acima da média
            contador_acima++;
        } else if (notas[i] < 0.9 * media) { // notas[i] < 0.9 * media
            // 10% abaixo da média
            contador_abaixo++;
        }
    }

    printf("%.2f\n%d\n%d\n", media, contador_acima, contador_abaixo);

    return 0;
}