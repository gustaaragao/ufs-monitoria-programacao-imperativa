#include <stdio.h>
#include <string.h>

typedef struct {
    int idade, numero_amigos, numero_fotos;
    char nome[51], sexo, estado_civil;
} usuario_t;

int main() {
    int n;
    scanf("%d ", &n);    
    usuario_t v[n];
    for (int i = 0; i < n; i++) {
        // Leitura dos dados
        char nome[51], sexo, estado_civil;
        int numero_amigos, numero_fotos, idade;
        
        scanf("%d ", &idade);
        
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        
        scanf("%c ", &sexo);
        
        scanf("%c ", &estado_civil);
        
        scanf("%d ", &numero_amigos);
        
        scanf("%d ", &numero_fotos);
        
        // Atribuição dos valores
        strcpy(v[i].nome, nome);
        v[i].sexo = sexo;
        v[i].estado_civil = estado_civil;
        v[i].numero_amigos = numero_amigos;
        v[i].numero_fotos = numero_fotos;
        v[i].idade = idade;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Idade: %d\n", v[i].idade);
        printf("Nome: %s\n", v[i].nome);
        printf("Sexo: %c\n", v[i].sexo);
        printf("Estado Civil: %c\n", v[i].estado_civil);
        printf("Numero de amigos: %d\n", v[i].numero_amigos);
        printf("Numero de fotos: %d\n\n", v[i].numero_fotos);
    }

    return 0;
}