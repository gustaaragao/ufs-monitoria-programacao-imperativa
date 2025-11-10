#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    
    long long soma = 0LL;
    for (int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        soma += x;
    }
    printf("%lld\n", soma);
}
