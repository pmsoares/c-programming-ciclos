#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que solicite ao utilizador um n�mero inteiro.
	Em seguida, escreve todos os n�meros inteiros a partir desse n�mero,
	exceto os m�ltiplos de 3.
	Quando encontrar o primeiro m�ltiplo de 10 termina a execu��o.
		Exemplo:
		Introduza um n�mero: 13
		13
		14
		16
		17
		19
*/

void prog0418() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, n;
	printf("Introduza um n�mero: ");
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