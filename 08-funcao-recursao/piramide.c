#include <stdio.h>

void imprimir(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1)
                printf(" ");
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    imprimir(n);

    return 0;
}

