#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que apresente um menu com as op��es:
	Clientes, Fornecedores, Encomendas e Sair
	O programa deve apresentar a op��o escolhida pelo utilizador at� que o utilizador deseje sair.
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
		printf("\n\n\n\t\t\tOp��o: ");
		scanf_s(" %c", &op, 1);
		getchar();
		
		switch (op) {
		case 'c':
		case 'C':
			puts("Op��o CLIENTES");
			break;

		case 'f':
		case 'F':
			puts("Op��o FORNECEDORES");
			break;

		case 'e':
		case 'E':
			puts("Op��o ENCOMENDAS");
			break;

		case 's':
		case 'S':
			//n�o faz nada
			break;

		default:
			puts("Op��o INV�LIDA!");
		}

		getchar(); //parar o ecr�
		

	} while (op != 's' && op != 'S');



}