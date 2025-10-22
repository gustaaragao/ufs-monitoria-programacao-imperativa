#include <stdio.h>

int main() {
    long long int n; scanf("%lld", &n);
    if (n == 0) {
        printf("NULO\n");
        return 0;
    }

    if (n > 0) {
        printf("POSITIVO ");
    } else {
        printf("NEGATIVO ");
    }

    if (n % 2 == 0) {
        printf("PAR\n");
    } else {
        printf("IMPAR\n");
    }

    return 0;
}