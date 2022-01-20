#include <stdio.h>
#include <locale.h>

/*
	Pergunta 10
		Escreva um programa em C, que escreva no ecr�, toda a tabela ASCII (0...255 chars),
		escrevendo em cada linha o c�digo ASCII e o car�cter correspondente.
			Exemplo:
				...
				65 --> A
				66 --> B
				67 --> C
				...
		A fim de que o utilizador possa ver todos os caracteres escritos, o ecr� deve ser
		parado de 20 em 20 linhas, at� que o utilizador prima a tecla 'c' ou 'C'
		seguido de <ENTER> para continuar a mostrar os pr�ximos 20 caracteres (20 linhas).

		Como b�nus (implementa��o opcional), pode implementar cores
		diferentes para os n�meros e caracteres impressos.
*/

void prog0421() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i, conta;
	char ch = ' ';

	for (i = 0, conta = 1; i <= 255; i++) {
		/* c�digos de cores para impress�o colorida na consola:
		* Vermelho: \033[31m
		* Verde:	\033[32m
		* Azul:		\033[34m
		* Reset:	\033[0m
		*/
		printf("\033[31m%3d \033[32m�-> \033[34m%c\033[0m\n", i, (char)i);
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