#include <stdio.h>
#include <stdbool.h>

int main() {
    int freq_notas[11] = {0}; // array para contar a freq das notas
    int qtd_alunos = 0, aprovados = 0;
    char gabarito[11]; 
    scanf("%s", gabarito);

    while (true) {
        int id; scanf("%d", &id);
        if (id == 9999) break;
        // Novo aluno
        qtd_alunos++;
        // Leitura do cartão de resposta
        char respostas[11]; 
        scanf("%s", respostas);
        // Contar a nota
        int nota = 0;
        for (int i = 0; i < 10; i++) {
            if (respostas[i] == gabarito[i]) {
                nota++;
            }
        }
        
        // Atualizar a frequência da nota
        freq_notas[nota]++;

        // O aluno foi aprovado?
        if (nota >= 6) aprovados++;

        // Exibir id do aluno e nota dele
        printf("%d %d.0\n", id, nota);
    }

    // Exibir porcentagem de aprovados
    float porc_aprovados = ((float) aprovados / qtd_alunos) * 100;
    printf("%.1f%%\n", porc_aprovados);
    
    // Nota mais frequente -> Buscar a moda
    int moda = -1, freq_moda = 0;
    for (int nota = 0; nota <= 10; nota++) {
        if (freq_notas[nota] >= freq_moda) {
            moda = nota;
            freq_moda = freq_notas[nota];
        }
    }
    printf("%d.0\n", moda);
    
    return 0;
}