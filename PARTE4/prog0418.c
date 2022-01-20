#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que solicite ao utilizador um número inteiro.
	Em seguida, escreve todos os números inteiros a partir desse número,
	exceto os múltiplos de 3.
	Quando encontrar o primeiro múltiplo de 10 termina a execução.
		Exemplo:
		Introduza um número: 13
		13
		14
		16
		17
		19
*/

void prog0418() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, n;
	printf("Introduza um número: ");
	scanf_s("%d", &n);
	for (i = n;; i++) {
		if (i % 10 == 0)
			break;
		else
			if (i % 3 == 0)
				continue;
		printf("%d\n", i);
	}
}