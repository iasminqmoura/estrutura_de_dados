#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//10) Preencher um vetor com os n�meros 10 a 20, e depois mostrar os elementos pares do vetor de tr�s pra frente. E tamb�m mostrar os n�meros �mpares.
int main() 
{	

	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10];
	int i;
	
	printf("Vetor inicial: \n");
	for(i = 10; i <=20; i++)
	{
			vetor[i-10] = i;
			printf("%d ", vetor[i-10]);
	}
	
	printf("\n\n");
	
	printf("N�meros pares decrescentes: \n");
	for(i = 20; i >= 10; i--)
	{
		if(vetor[i-10] % 2 == 0)
		{
			printf("%d ", vetor[i-10]);
		}

	}
	
	printf("\n\n");
	
	printf("N�meros �mpares: \n");
	for(i = 20; i >= 10; i--)
	{
		if(vetor[i-10] % 2 == 1)
		{
			printf("%d ", vetor[i-10]);
		}
	}
	
	
}
