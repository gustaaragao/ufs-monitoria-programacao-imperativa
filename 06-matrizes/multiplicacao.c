#include <stdio.h>

int main() {
    int n, m, o;
    scanf("%d %d %d", &n, &m, &o);
    int a[n][m], b[m][o], c[n][o];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < o; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < o; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            if (j != o-1)
                printf("%d ", c[i][j]);   
            else 
                printf("%d", c[i][j]);   
        }
        if (i != n-1) printf("\n");   
    }
}