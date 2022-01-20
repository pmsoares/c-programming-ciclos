#include <stdio.h>
#include <locale.h>

void prog0412() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x=1, n;

	while (x <= 5) {
		do {
			printf("Introduza um nº: ");
			scanf_s("%d", &n);


		} while (n < 0);
	}
}
