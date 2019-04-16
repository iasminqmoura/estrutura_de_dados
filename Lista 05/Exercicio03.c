#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	
	//03) Preencher um vetor com os números pares do número 2 ao 20. Preencher um vetor com os números de 10 a 19. Somar os vetores acima. Imprimir os dois vetores e o resultado da soma.
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10];
	int vetor2[10];
	int vetorSoma[10];
	int i;
	
	printf("Vetor 1: \n");
	for(i = 0; i < 20; i++)
	{
		if(i % 2 == 0)
		{
			vetor[i/2] = i;
			printf("%d ", vetor[i/2]);
		}
	}
	
	printf("\n");
	printf("Vetor 2: \n");
	for(i = 10; i <=19; i++)
	{
			vetor2[i-10] = i;
			printf("%d ", vetor2[i-10]);
	}
	
	
	printf("\n\n");
	printf("SOMA DOS DOIS VETORES: \n");
	for(i = 0; i < 10; i++)
	{
		vetorSoma[i] = vetor[i] + vetor2[i];
		printf("%d ", vetorSoma[i]);

	}

}
