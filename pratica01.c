#include <stdio.h>

#define min(a, b) a <= b ? a : b
#define max(a, b) a >= b ? a : b

const int INF = 0x3f3f3f3f;

int main() {
	int v[10];
	
	// Leitura do Vetor
	for (int i = 0; i < 10; i++)
		scanf("%d", &v[i]);
	
	// Ler o número X e fazer a busca
	int x; scanf("%d", &x);

	int id = -1;
	for (int i = 0; i < 10; i++) {
		if (v[i] == x) {
			id = i;
			break;
		}
	}
	
	printf("%d\n", id);
	
	// Encontrar o menor e maior valor
	int maior = -INF, menor = INF;
	for (int i = 0; i < 10; i++) {
		maior = max(maior, v[i]);
		menor = min(menor, v[i]);
	}
	
	printf("Maior = %d | Menor = %d\n", maior, menor);

	return 0;
}
