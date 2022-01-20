#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que apresente um menu com as opções:
	Clientes, Fornecedores, Encomendas e Sair
	O programa deve apresentar a opção escolhida pelo utilizador até que o utilizador deseje sair.
*/

void prog0408() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char op;

	do	{
		printf("\tM E N U    P R I N C I P A L\n");
		printf("\n\n\t\tClientes");
		printf("\n\n\t\tFornecedores");
		printf("\n\n\t\tEncomendas");
		printf("\n\n\t\tSair");
		printf("\n\n\n\t\t\tOpção: ");
		scanf_s(" %c", &op, 1);
		getchar();
		
		switch (op) {
		case 'c':
		case 'C':
			puts("Opção CLIENTES");
			break;

		case 'f':
		case 'F':
			puts("Opção FORNECEDORES");
			break;

		case 'e':
		case 'E':
			puts("Opção ENCOMENDAS");
			break;

		case 's':
		case 'S':
			//não faz nada
			break;

		default:
			puts("Opção INVÁLIDA!");
		}

		getchar(); //parar o ecrã
		

	} while (op != 's' && op != 'S');



}