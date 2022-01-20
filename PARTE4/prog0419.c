#include <stdio.h>
#include <locale.h>

/*
	Pergunta 8
		Escreva um programa que coloque no ecrã meia árvore de Natal com asteriscos.
		O número de ramos deverá ser introduzido pelo utilizador.
			Exemplo com 3, 4 e 5 ramos:
				*			*			*
				* *			* *			* *
				* * *		* * *		* * *
							* * * *		* * * *
										* * * * *
*/

void prog0419() {
	setlocale(LC_ALL, "Portuguese_Portugal");
	int i, j, n;

	printf("Qual o N° de Ramos: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
}