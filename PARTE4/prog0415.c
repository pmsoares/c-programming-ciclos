#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que escreva no ecr� toda a
	tabela de ASCII (0 ao 255 chars), escrevendo em cada linha
	o c�digo ASCII e o car�cter correspondente.
*/

void prog0415() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i;
	for (i = 0; i <= 255; i++)
		printf("%3d --> %c\n", i, (char)i);
}