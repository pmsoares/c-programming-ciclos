#include <stdio.h>
#include <locale.h>

void prog0402() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i = 10;
	while (i) {
		printf("%d\n", i);
		i = i - 1;
	}
}