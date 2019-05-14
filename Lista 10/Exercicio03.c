#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//3) Faça um programa que grave 50 números aleatórios (entre 0 e 100) em um arquivo do tipo texto.
	//Faça outro programa que leia este arquivo texto que foi gerado.
	
	FILE *pont_arq;
	int i, j;
	
	pont_arq = fopen("exercicio03.txt", "w");
	
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
		for(j = 0; j < 50; j++)
		{
			i = 0 + (rand () % 100);
			
			fprintf(pont_arq, "%d\n", i);
		}
	
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");

	return 0;
}

