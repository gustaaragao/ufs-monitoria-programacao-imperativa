#include <stdio.h>

int main() {
    int x; scanf("%d", &x);
    int unidade = x % 10, dezena = x / 10;
    if (unidade != 0) {
        printf("%d", unidade);
    }
    printf("%d\n", dezena);
    return 0;
}