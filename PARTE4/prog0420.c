#include <stdio.h>
#include <locale.h>

/*
	Pergunta 9
		Altere o programa anterior de forma que, em vez de asteriscos,
		sejam escritas letras em cada nível, começando o nível inicial com a letra 'A'.

			Exemplo com 3, 4 e 5 ramos:
				A			A			A
				B B			B B			B B
				C C C		C C C		C C C
							D D D D		D D D D
										E E E E E
*/

void prog0420() {
	setlocale(LC_ALL, "Portuguese_Portugal");
	int i, j, n;

	printf("Qual o N° de Ramos: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			putchar('A' + i - 1);
		putchar('\n');
	}
}