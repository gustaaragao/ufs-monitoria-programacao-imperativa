#include <stdio.h>

int main() {
    int arr[100], n;

    // Lendo a entrada
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Parte 1: Há solução?
    // Vamos contar quantas vezes v[i] > v[i+1], ou seja, as "quebras".
    // Se a contagem for:
    // == 0, o vetor já está ordenado -> Reposta = 0
    //  > 1, Não há solução -> Retorna -1
    // == 1, Pode haver solução 
    //         -> Precisamos verificar se arr[n - 1] <= arr[0] 
    //              -> Caso seja verdade, há solução.
    //              -> Caso contrário, não há solução.
    int quebras = 0, pos_quebra = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            quebras++;
            pos_quebra = i;
        }
    }

    if (quebras == 0) {
        // Já está ordenado -> Resposta = 0.
        printf("0\n");
        return 0;
    } else if (quebras > 1) {
        // Não há solução -> Resposta = -1
        printf("-1\n");
        return 0;
    }
    
    // Daqui em diante temos certeza que "quebras = 1". 
    if (arr[n-1] > arr[0]) {
        // Não há solução -> Resposta = -1
        printf("-1\n");
        return 0;
    }

    // Parte 2: Caso haja solução, encontre a Solução
    int solucao = n - pos_quebra - 1;
    printf("%d\n", solucao);

    return 0;
}