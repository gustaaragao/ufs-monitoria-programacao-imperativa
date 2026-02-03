#include <stdio.h>

int serie(int i) {
    // Caso Base
    if (i == 1) return 3;
    // Passo Recursivo
    if (i % 2 == 0) 
        return 4 + serie(i-1);
    else 
        return 1 + serie(i-1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", serie(n));
    return 0;
}
