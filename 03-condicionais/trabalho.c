#include <stdio.h>

int main() {
    int interface_grafica, ia, encapsulamento, indentacao, structs;
    scanf("%d %d %d %d %d", &interface_grafica, &ia, &encapsulamento, &indentacao, &structs);
    if ((interface_grafica || ia) && (encapsulamento && indentacao) && structs) {
        printf("AVALIADO\n");
    } else {
        printf("0\n");
    }
    return 0;
}