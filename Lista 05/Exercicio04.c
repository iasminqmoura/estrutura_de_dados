#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	//04) Preencher um vetor de oito elementos inteiros. Mostrar o vetor e informar quantos n�meros s�o maiores que 30, somar estes n�meros. Somar todos os n�meros.
	
	int vetor[8];
	int i,j=0;
	int soma=0,soma2=0;
	int maiores;
	
	for(i = 0; i < 8; i++)
	{
		printf("Digite os numeros: ");
		scanf("%d",&vetor[i]);
	}
	
	for(i=0;i<8;i++)
	{
		soma2+=vetor[i];

		if (vetor[i]>30)
		{
			maiores = maiores + 1;
			soma+=vetor[i];
			j++;
		}
	
	}	
	printf("\n%d n�meros s�o maiores que 30", maiores);
	printf("\nSoma dos n�meros maiores que 30: %d\nSoma todos os n�meros inseridos: %d", soma, soma2);

}
