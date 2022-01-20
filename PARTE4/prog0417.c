#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que solicite ao utilizador um número e um carácter.
	Em seguida terá que preencher n linhas, cada uma delas com n caracteres.
		Exemplo:
			Introduza um número: 3
			Introduza um carácter: *
				* * *
				* * *
				* * *
*/

void prog0417() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, j, n;
	char ch;

	printf("Introduza um número: ");
	scanf_s("%d", &n);
	printf("Introduza um carácter: ");
	scanf_s(" %c", &ch, 1);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			putchar(ch);
		putchar('\n');
	}
}