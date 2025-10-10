#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char palavra[100];
	scanf("%s", palavra);

	bool palindromo = true;
	int i = 0, j = strlen(palavra) - 1;
	while (j > i) {
		if (palavra[j] != palavra[i]) {
			palindromo = false;
			break;
		}
		i++, j--;
	}
	
	if (palindromo) {
		printf("É um palíndromo!\n");
	} else {
		printf("Não é um palíndromo!\n");
	}

	return 0;
}
