#include <stdio.h>

int main() {
    double montante, juros;
    scanf("%lf %lf", &montante, &juros);
    int anos; 
    scanf("%d", &anos);
    int trimestres = anos * 4;
    for (int i = 0; i < trimestres; i++) {
        double rendimento = montante * juros;
        montante += rendimento;
        printf("Rendimento: %.2lf Montante: %.2lf\n", rendimento, montante);
    }
}
