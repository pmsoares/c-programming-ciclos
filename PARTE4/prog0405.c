#include <stdio.h>
#include <locale.h>

void prog0405() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i = 1, num = 1;

	while (i <= 5) {
		while (num <= 10) {
			printf("%2d * %2d = %2d\n", num, i, i * num);
			num = num + 1;
		}
		putchar('\n');
		num = 1;
		i = i + 1;
	}
}