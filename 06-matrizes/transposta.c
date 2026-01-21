#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    // Eu já posso ler de forma transposta
    int mat[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[j][i]);
        }
    }    
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }    
}