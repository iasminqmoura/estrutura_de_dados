#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//05) Fa�a um c�digo que receba um n�mero inteiro do usu�rio, e imprima esse n�mero, se ele � positivo ou negativo, se ele � par ou �mpar. O programa s� termina se o usu�rio digitar 0 (zero).
	
	int num;
	
	do
	{
		printf("Insira um n�mero inteiro (digite 0 para parar): ");
		scanf("%d", &num);
		
		if(num > 0)
		{
			printf("O n�mero %d � POSITIVO e ", num);	
		}
		else
		{
			printf("O n�mero %d � NEGATIVO e ", num);
		}
		
		if(num % 2 == 0)
		{
			printf("PAR.\n");
		}
		else
		{
			printf("�MPAR.\n");
		}
	}while(num!=0);

	return 0;
}


