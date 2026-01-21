#include <stdio.h>
#include <limits.h>

int main() {
    int m[3][3], minimo = INT_MAX, soma_pos = 0, cnt_pos = 0, soma_fora = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if (m[i][j] < minimo) {
                minimo = m[i][j];
            }
            if (m[i][j] > 0) {
                soma_pos += m[i][j];
                cnt_pos++;
            }
            if (i != j) {
                soma_fora += m[i][j];
            }
        }
    }
    double media = (double) soma_pos / cnt_pos;
    printf("%.2lf ", media);
    int delta = minimo % 2 == 0;
    printf("%d %d %d\n", minimo, delta, soma_fora);
}