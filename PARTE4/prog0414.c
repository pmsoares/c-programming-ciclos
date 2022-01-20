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

void prog0414() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x, y;
	y = 1;
	x = 5;
	y = ++x;
	printf("%d\n", x);
	printf("%d", y);
}