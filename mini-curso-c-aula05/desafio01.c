#include <stdio.h>
#include <string.h>

int main() {
    // Vetor de Contagem
    int cnt[26] = {0};

    // Lendo a entrada
    char entrada[101];
    scanf("%s", entrada);

    // Contagem
    int tamanho = strlen(entrada);
    for (int i = 0; i < tamanho; i++) {
        char c = entrada[i];
        cnt[c - 'a']++;
    }

    // Exibindo resposta
    for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
            char c = i + 'a';
            printf("%c: %d\n", c, cnt[i]);
        }
    }

    return 0;
}