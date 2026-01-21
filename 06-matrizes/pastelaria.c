#include <stdio.h>

int main() {
    int qtd[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &qtd[i][j]);
        }
    }
    double preco[4];
    for (int i = 0; i < 4; i++) 
        scanf("%lf", &preco[i]);
    double resposta[3] = {0.0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            resposta[i] += qtd[i][j] * preco[j];
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%.2lf\n", resposta[i]);
    }
}