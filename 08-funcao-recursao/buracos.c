#include <stdio.h>

int contar(const char texto[]) {
    int buracos = 0;

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        if (c == 'B') {
            buracos += 2;
        } else if (c == 'A' || c == 'D' || c == 'O' ||
                   c == 'P' || c == 'R' || c == 'Q') {
            buracos += 1;
        }
    }

    return buracos;
}

int main() {
    int t;
    char texto[101];

    scanf("%d", &t);

    while (t--) {
        scanf("%s", texto);
        printf("%d\n", contar(texto));
    }

    return 0;
}

