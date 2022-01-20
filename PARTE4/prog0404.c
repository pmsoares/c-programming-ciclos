#include <stdio.h>
#include <locale.h>

void prog0404() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i = 1, num;

	printf("Introduza um número inteiro: ");
	scanf_s("%d", &num);

	while (i <= 10) {
		printf("%2d * %2d = %2d\n", num, i, i * num);
		i = i + 1;
	}
}