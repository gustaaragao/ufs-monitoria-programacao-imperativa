#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int qtd = 0;
    for (int i = a; i <= b; i++) {
        if (i % n == 0) {
            printf("%d\n", i);
            qtd++;
        }
    }
    if (qtd == 0) {
        printf("INEXISTENTE\n");
    }
}
