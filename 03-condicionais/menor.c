#include <stdio.h>

int main() {
    int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);
    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }

    if (c < min) min = c;

    printf("%d\n", min);

    return 0;
}