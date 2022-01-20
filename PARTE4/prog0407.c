#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que coloque no ecr� as 5 primeiras tabuadas,
	parando o ecr� depois de escrita de cada uma delas
*/
void prog0407() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, j;
	char x;

	for (i = 1; i <= 5; i = i + 1) {
		for (j = 1; j <= 10; j = j + 1) {
			printf("%2d * %2d = %2d\n", i, j, i * j);
		}

		if (i != 5) {
			printf("Prima <ENTER> para continuar...");
			x = getchar();
		}
	}
}