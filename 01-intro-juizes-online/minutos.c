#include <stdio.h>

int main() {
    int hr, min;
    scanf("%d %d", &hr, &min);
    int total = 60*hr + min;
    printf("%d minutos.\n", total);
    return 0;
}
