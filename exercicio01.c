#include <stdio.h>

int main() {
    int arr[5];
    // Questão 1
    for (int i = 0; i < 5; i++) {
        printf("Digite arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    // Questão 2
    printf("Exibir Vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Questão 3
    long long int soma = 0LL;
    for (int i = 0; i < 5; i++) soma += arr[i];
    double media = (double) soma / 5;
    printf("Soma: %lld | Media: %.2lf\n", soma, media);
    // Questão 4
    int x, id = -1;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == x) {
            id = i;
            break;
        }
    }
    if (id != -1) {
        printf("O valor %d esta na posicao %d\n", x, id);
    } else {
        printf("Valor não encontrado\n");
    }
    return 0;
}