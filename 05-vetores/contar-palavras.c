#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char str[501];
    fgets(str, 501, stdin);
    int contador_espacos = 0;
    bool leu_espaco = false; // isso impede que conte espaços consecutivos
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            if (!leu_espaco) {
                contador_espacos++;
            }
            leu_espaco = true;
        } else {
            leu_espaco = false;
        }
    }
    printf("%d\n", contador_espacos + 1);
    return 0;
}