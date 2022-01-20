#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que calcule a soma e o produto
	dos n primeiros números naturais.
*/
void prog0406() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num, produto, soma, i;

	printf("Introduza um número: ");
	scanf_s("%d", &num);

	for (soma = 0, i = produto = 1; i <= num; i = i + 1) {
		soma = soma + i;
		produto = produto * i;
	}

	printf("Soma = %d\tProduto = %d\n", soma, produto);
}