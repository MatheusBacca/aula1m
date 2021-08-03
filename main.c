#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct 
{
    char nome[100];
    int vale;
    int planoSaude;
    float salario;
    int dependentes;
} funcionario;

void main()
{
	funcionario *func;
	func = (funcionario*) malloc (sizeof (funcionario));
	printf("\n\tOlá, seja bem-vindo a folha de pagamento!\n");
	printf("\n\tEntre com seu nome: ");
}
