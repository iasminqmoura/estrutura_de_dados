#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//2) Fa�a um programa que grave 25 n�meros aleat�rios (entre 10 e 99) em um arquivo do tipo texto.
	//Fa�a outro programa que leia este arquivo texto que foi gerado, e guarde esses 25 n�meros em uma matriz 5x5, e a exiba na tela.


	
	FILE *pont_arq;
	int i, j;
	
	pont_arq = fopen("exercicio02.txt", "w");
	
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
		for(j = 0; j < 25; j++)
		{
			i = 10 + (rand () % 90);
			
			fprintf(pont_arq, "%d\n", i);
		}
	
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");

	return 0;
}

