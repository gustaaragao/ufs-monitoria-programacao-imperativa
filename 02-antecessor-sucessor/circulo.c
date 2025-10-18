#include <stdio.h>

const double PI = 3.14159;

int main() {
    double raio; scanf("%lf", &raio);
    raio /= 100; // cm -> m
    double area = PI * raio * raio;
    printf("Area = %.4lf\n", area);
    return 0;
}