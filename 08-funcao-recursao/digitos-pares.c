#include <stdio.h>

int contar(int n) {
    // Caso base: sobrou apenas um digito
    if (n >= 0 && n <= 9) return (n % 2 == 0);
    else {
        int d = n % 10;
        return (d % 2 == 0) + contar(n/10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", contar(n));
    return 0;
}
