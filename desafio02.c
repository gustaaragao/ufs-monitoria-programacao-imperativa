#include <stdio.h>

int main() {
    int arr[100], n, k;

    // Lendo a entrada
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Efetuando a rotação
    // Obs1.: Também é possível fazer isso usando o operador % (Módulo) (Fica o desafio tentar!)
    // Obs2.: Estamos modificando o vetor inicial, você também poderia criar uma cópia, operar na cópia e preservar o vetor inicial.
    for (int j = 0; j < k; j++) { // Executa k vezes a rotação
        // Salva o último elemento
        int ultimo = arr[n - 1];
        for (int i = n-1; i > 0; i--) {
            // Desloca os elementos
            arr[i] = arr[i - 1];
        }
        // Coloca o último no início
        arr[0] = ultimo;
    }

    // Exibindo o vetor "bonitinho" -> Isso pode virar uma função "exibir(int arr[], int n)"
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }
    printf("]\n");
    
    return 0;
}