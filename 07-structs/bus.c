#include <stdio.h>
#include <string.h>

typedef struct {
    int passagem;
    char data[20];
    char origem[50];
    char destino[50];
    char horario[10];
    int poltrona;
    int idade;
    char nome[100];
} passageiro_t;

int main() {
    passageiro_t p[44];
    int qtd = 0;
    int somaIdades = 0;

    while (qtd < 44) {
        scanf("%d", &p[qtd].passagem);
        getchar(); // consome '\n'

        if (p[qtd].passagem == -1) {
            break;
        }

        fgets(p[qtd].data, 20, stdin);
        p[qtd].data[strcspn(p[qtd].data, "\n")] = '\0';

        fgets(p[qtd].origem, 50, stdin);
        p[qtd].origem[strcspn(p[qtd].origem, "\n")] = '\0';

        fgets(p[qtd].destino, 50, stdin);
        p[qtd].destino[strcspn(p[qtd].destino, "\n")] = '\0';

        fgets(p[qtd].horario, 10, stdin);
        p[qtd].horario[strcspn(p[qtd].horario, "\n")] = '\0';

        scanf("%d", &p[qtd].poltrona);
        scanf("%d", &p[qtd].idade);
        getchar(); // consome '\n'

        fgets(p[qtd].nome, 100, stdin);
        p[qtd].nome[strcspn(p[qtd].nome, "\n")] = '\0';

        somaIdades += p[qtd].idade;
        qtd++;
    }

    double media = (double)somaIdades / qtd;

    for (int i = 0; i < qtd; i++) {
        if (p[i].idade > media && p[i].poltrona % 2 == 0) {
            printf("%s\n", p[i].nome);
        }
    }

    return 0;
}