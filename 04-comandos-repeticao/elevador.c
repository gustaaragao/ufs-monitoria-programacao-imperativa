#include <stdio.h>

int main() {
    int n, c;
    scanf("%d %d", &n, &c);
    long long qtd = 0LL;
    for (int i = 0; i < n; i++) {
        int s, e; 
        scanf("%d %d", &s, &e);
        qtd -= s; qtd += e;
        if (qtd > c) {
            printf("S\n");
            return 0;
        }
    }
    printf("N\n");
}
