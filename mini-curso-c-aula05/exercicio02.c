#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    // Questão 1
    printf("Digite o primeiro nome: ");
    scanf("%s", nome);
    printf("Nome = %s\n", nome);
    // Questão 2
    int tamanho_nome = strlen(nome);
    printf("Tamanho = %d\n", tamanho_nome);
    // Questão 3
    char mensagem[110] = "Olá, ";
    strcat(mensagem, nome);
    strcat(mensagem, "!");
    printf("Mensagem: %s\n", mensagem);
    // Questão 4
    if (strcmp(nome, "Gustavo") == 0) {
        printf("nome == 'Gustavo'\n");
    } else if (strcmp(nome, "Gustavo") < 0) {
        printf("nome < 'Gustavo'\n");
    } else if (strcmp(nome, "Gustavo") > 0) {
        printf("nome > 'Gustavo'\n");
    }
    return 0;
}
