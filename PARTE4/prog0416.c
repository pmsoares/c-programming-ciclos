#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que solicite ao utilizador um número e escreva em
	simultâneo a sequência crescente e decrescente entre 1 e esse número:
		Introduza um número: 5
		1   5
		2   4
		3   3
		4   2
		5   1
*/

void prog0416() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, j, n;
	printf("Introduza um número: ");
	scanf_s("%d", &n);
	for (i = 1, j = n; i <= n; i++, j--)
		printf("%3d\t%3d\n", i, j);
}