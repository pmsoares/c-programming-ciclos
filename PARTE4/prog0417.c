#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que solicite ao utilizador um n�mero e um car�cter.
	Em seguida ter� que preencher n linhas, cada uma delas com n caracteres.
		Exemplo:
			Introduza um n�mero: 3
			Introduza um car�cter: *
				* * *
				* * *
				* * *
*/

void prog0417() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, j, n;
	char ch;

	printf("Introduza um n�mero: ");
	scanf_s("%d", &n);
	printf("Introduza um car�cter: ");
	scanf_s(" %c", &ch, 1);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			putchar(ch);
		putchar('\n');
	}
}