#include <stdio.h>
#include <string.h>

int main() {
    char str[51], c;
    scanf("%s %c", str, &c);
    int contador = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) contador++;    
    }
    printf("%d\n", contador);
}
