#include <stdio.h>
#include <locale.h>

void prog0403() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i = 1;
	while (i <= 10) {
		printf("5 * %2d = %2d\n", i, 5 * i);
		i = i + 1;
	}
}