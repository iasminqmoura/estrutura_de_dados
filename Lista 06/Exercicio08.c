#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//08) Gere uma matriz 5x5 com n�meros aleat�rios entre 10 e 99. Imprima a matriz gerada. Encontre o valor m�nimo e o valor m�ximo desta matriz.

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	int matriz[5][5];
	int maximo, minimo;
	
	srand(time(NULL));
	

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			matriz[i][j] = 10 + rand()%(10-99);
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	maximo = matriz[0][0];
	minimo = matriz[0][0];
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(matriz[i][j] > maximo)
			{
				maximo = matriz[i][j];
			}
			
			if(matriz[i][j] < minimo)
			{
				minimo = matriz[i][j];
			}
		}
		
	}

	printf("\nM�ximo: %d\n", maximo);
	printf("M�nimo: %d\n", minimo);
	
}

