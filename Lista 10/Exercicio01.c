#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//1) Faça um programa que grave 10 números aleatórios (entre 0 e 20) em um arquivo do tipo texto.
	//Faça outro programa que leia este arquivo texto que foi gerado, e calcule a média dos dez números que estão gravados nele.
	
	FILE *pont_arq;
	int i, j;
	
	pont_arq = fopen("exercicio01.txt", "w");
	
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
		for(j = 0; j < 10; j++)
		{
			i = 0 + (rand () % 20);
			
			fprintf(pont_arq, "%d\n", i);
		}
	
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");

	return 0;
}

