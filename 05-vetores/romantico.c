#include <stdio.h>

int v[1001];

int main() {
    int n, e; scanf("%d %d", &n, &e);    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if ((v[i] + v[j]) == e) {
                printf("SIM\n");
                return 0;
            }
        }
    }
    printf("NAO\n");
    return 0;
}