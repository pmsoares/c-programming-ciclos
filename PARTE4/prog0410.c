#include <stdio.h>
#include <locale.h>

void prog0410() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i;

	for (i = 1; i <= 100; i = i + 1)
		if (i == 30)
			break;
		else
			printf("%2d\n", 2 * i);
	printf("FIM DO CICLO\n");
}