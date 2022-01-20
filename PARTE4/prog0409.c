#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que mostre os 10 primeiros números pares.
*/

void prog0409() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i;

	/*for (i = 1; i <= 10; i = i + 1)
		printf("%2d\n", i * 2);*/


	for (i = 2; i <= 20; i = i + 2)
		printf("%2d\n", i);

}