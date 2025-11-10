#include <stdio.h>
#include <stdbool.h>

int main() {
    long long n = 0, soma = 0LL;
    while (true) {
        int x; scanf("%d", &x);
        if (x < 0) break;
        soma += x;
        n++; 
    }
    double media = (double) soma / n;
    printf("%.2lf\n", media);
}
