#include <stdio.h>

int main() {
    int L, C, H; 
    scanf("%d %d %d", &L, &C, &H);
    int l, c, h;
    scanf("%d %d %d", &l, &c, &h);
    if (h <= H && c <= C && l <= L) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    return 0;
}