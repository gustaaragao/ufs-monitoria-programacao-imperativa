#include <stdio.h>
#include <stdbool.h>

int main() {
    int cartas[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }
    
    // cartas estão ordenadas crescentemente?
    bool crescente = true;
    for (int i = 1; i < 5; i++) {
        if (cartas[i] < cartas[i-1]) {
            crescente = false;
            break;
        }
    }
    
    if (crescente) {
        printf("C\n");
        return 0;
    }
    
    // cartas estão ordenadas decrescentemente?
    bool decrescente = true;
    for (int i = 1; i < 5; i++) {
        if (cartas[i] > cartas[i-1]) {
            decrescente = false;
            break;
        }
    }
    
    if (decrescente) {
        printf("D\n");
        return 0;
    }

    printf("N\n");
    return 0;
}

