#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//3) Fa�a um programa que grave 50 n�meros aleat�rios (entre 0 e 100) em um arquivo do tipo texto.
	//Fa�a outro programa que leia este arquivo texto que foi gerado.

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int num, contPar = 0, contImpar = 0, pares;
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("exercicio03.txt", "r");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}

	printf("N�meros pares: ");
	while(fscanf(pont_arq, "%d", &num) != EOF)
	{
		if(num % 2 == 0)
		{
			contPar++;
			printf("%d ", num);
		}
	}
	printf("\n");
	printf("O arquivo possui %d n�meros pares.", contPar);
	printf("\n\n");
	
	rewind(pont_arq);
	
	printf("N�meros �mpares: ");
	while(fscanf(pont_arq, "%d", &num) != EOF)
	{
		if(num % 2 != 0)
		{
			contImpar++;
			printf("%d ", num);

		}
	}
	printf("\n");
	printf("O arquivo possui %d n�meros �mpares.", contImpar);
	printf("\n\n");
	
	fclose(pont_arq);

	
}
