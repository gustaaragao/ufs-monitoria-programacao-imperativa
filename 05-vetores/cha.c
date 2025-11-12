#include <stdio.h>

int main() {
    int t; scanf("%d", &t);
    int chutes[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &chutes[i]);
    }
    int acertos = 0;
    for (int i = 0; i < 6; i++) {
        if (chutes[i] == t) acertos++;
    }
    printf("%d\n", acertos);
    return 0;
}