#include <stdio.h>
#include <locale.h>

void prog0401() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	//int i = 1;
	//while (i <= 10) {
	//	printf("%d\n", i++);
	//}

	int i;
	for (i = 1; i <= 10; i++)
		printf("%d\n", i);}