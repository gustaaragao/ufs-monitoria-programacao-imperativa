#include <stdio.h>

int main() {
    double celsius; scanf("%lf", &celsius);
    printf("%.2lf\n", (celsius-32.0) * 5.0/9.0);
    return 0;
}