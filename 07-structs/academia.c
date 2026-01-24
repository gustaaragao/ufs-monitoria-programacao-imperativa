#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    int senha;
    char situacao;
} cliente_t;

int main() {
    cliente_t clientes[100];
    int total = 0;

    // Cadastro dos clientes
    while (total < 100) {
        fgets(clientes[total].nome, 51, stdin);
        clientes[total].nome[strcspn(clientes[total].nome, "\n")] = '\0';

        if (strcmp(clientes[total].nome, "SAIR") == 0) {
            break;
        }

        scanf("%d", &clientes[total].senha);
        scanf(" %c", &clientes[total].situacao);
        getchar(); // consome o '\n'

        total++;
    }

    // Leitura das senhas para acesso
    int senha_digitada;
    while (1) {
        scanf("%d", &senha_digitada);

        if (senha_digitada == -1) {
            break;
        }

        int encontrado = 0;

        for (int i = 0; i < total; i++) {
            if (clientes[i].senha == senha_digitada) {
                encontrado = 1;

                if (clientes[i].situacao == 'P') {
                    printf("%s, seja bem-vindo(a)!\n", clientes[i].nome);
                } else {
                    printf("Não está esquecendo de algo, %s? Procure a recepção!\n",
                           clientes[i].nome);
                }
                break;
            }
        }

        if (!encontrado) {
            printf("Seja bem-vindo(a)! Procure a recepção!\n");
        }
    }

    return 0;
}