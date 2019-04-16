#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//05) Faça um código que receba um número inteiro do usuário, e imprima esse número, se ele é positivo ou negativo, se ele é par ou ímpar. O programa só termina se o usuário digitar 0 (zero).
	
	int num;
	
	do
	{
		printf("Insira um número inteiro (digite 0 para parar): ");
		scanf("%d", &num);
		
		if(num > 0)
		{
			printf("O número %d é POSITIVO e ", num);	
		}
		else
		{
			printf("O número %d é NEGATIVO e ", num);
		}
		
		if(num % 2 == 0)
		{
			printf("PAR.\n");
		}
		else
		{
			printf("ÍMPAR.\n");
		}
	}while(num!=0);

	return 0;
}


