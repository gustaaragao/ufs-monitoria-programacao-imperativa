#include <stdio.h>

int main() {
    int v[101];
    for (int i = 0; i < 100; i++) {
        scanf("%d", &v[i]);
    }
    int ultimo; scanf("%d", &ultimo);
    for (int i = 0; i < 100; i++) {
        if (ultimo == v[i]) {
            printf("%d\n", i);
        } 
    }
    return 0;
}