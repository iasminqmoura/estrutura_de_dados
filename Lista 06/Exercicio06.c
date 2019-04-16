#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//06) Gere uma matriz 5x5 com números aleatórios entre 0 e 20. Imprima a matriz gerada. Calcule a soma de todos os elementos desta matriz.

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	int matriz[5][5];
	int soma = 0;
	
	srand(time(NULL));
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			matriz[i][j] = rand()%20;
			printf("%d ", matriz[i][j]);
			soma = soma + matriz[i][j];
		}
		printf("\n");
	}
	
	printf("A soma dos valores da matriz é: %d", soma);
	
	
	
}
