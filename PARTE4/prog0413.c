#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que coloque os seguintes números no ecrã:
		1
		1 2
		1 2 3
		...
		1 2 3 4 5 6 7 8 9 10
*/

void prog0413() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, j;
	for (i = 1; i <= 10; i = i + 1) {
		for (j = 1; j <= i; j = j + 1) {
			printf("%d ", j);
		}
		putchar('\n');
	}
}