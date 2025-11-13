#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    bool letras[27] = {false}; // letras que aparecem na segunda string;
    char str1[81], str2[81];
    scanf("%s %s", str1, str2);
    for (int i = 0; i < strlen(str2); i++) {
        letras[str2[i] - 'a'] = true;
    }
    // A consulta virou O(1)
    for (int i = 0; i < strlen(str1); i++) {
        if (!letras[str1[i] - 'a']) {
            printf("%c", str1[i]);
        }
    }
    printf("\n");
}