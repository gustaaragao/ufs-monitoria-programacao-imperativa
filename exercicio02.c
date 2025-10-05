#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    // Questão 1
    printf("Digite o nome e o último nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';
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
    if (strcmp(nome, "Gustavo Aragão") == 0) {
        printf("nome == 'Gustavo Aragão'\n");
    } else if (strcmp(nome, "Gustavo Aragão") < 0) {
        printf("nome < 'Gustavo Aragão'\n");
    } else if (strcmp(nome, "Gustavo Aragão") > 0) {
        printf("nome > 'Gustavo Aragão'\n");
    }
    return 0;
}