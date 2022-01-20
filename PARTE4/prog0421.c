#include <stdio.h>
#include <locale.h>

/*
	Pergunta 10
		Escreva um programa em C, que escreva no ecrã, toda a tabela ASCII (0...255 chars),
		escrevendo em cada linha o código ASCII e o carácter correspondente.
			Exemplo:
				...
				65 --> A
				66 --> B
				67 --> C
				...
		A fim de que o utilizador possa ver todos os caracteres escritos, o ecrã deve ser
		parado de 20 em 20 linhas, até que o utilizador prima a tecla 'c' ou 'C'
		seguido de <ENTER> para continuar a mostrar os próximos 20 caracteres (20 linhas).

		Como bónus (implementação opcional), pode implementar cores
		diferentes para os números e caracteres impressos.
*/

void prog0421() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, conta;
	char ch = ' ';

	for (i = 0, conta = 1; i <= 255; i++) {
		/* códigos de cores para impressão colorida na consola:
		* Vermelho: \033[31m
		* Verde:	\033[32m
		* Azul:		\033[34m
		* Reset:	\033[0m
		*/
		printf("\033[31m%3d \033[32m—-> \033[34m%c\033[0m\n", i, (char)i);
		if (conta == 20) {
			do {
				printf("Pressione c ou C para continuar ...");
				scanf_s(" %c", &ch, 1);
			} while (ch != 'c' && ch != 'C');
			conta = 1;
		}
		else
			conta++;
	}
}