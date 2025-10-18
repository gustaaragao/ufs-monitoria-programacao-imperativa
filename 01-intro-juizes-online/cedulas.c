#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n); 
    printf("%d\n", n);    
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int qtd_cedulas = sizeof(cedulas) / sizeof(int);

    for (int i = 0; i < qtd_cedulas; i++) {
        int contador = 0;
        while (n >= cedulas[i]) {
            n -= cedulas[i];
            contador++;
        }
        printf("%d nota(s) de R$ %d,00\n", contador, cedulas[i]);
    }

    return 0;
}
