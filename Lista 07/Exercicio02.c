#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	FILE *pont_arq; 
	int i, j, k;
	
	pont_arq = fopen("exercicio02.txt", "w");
	
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
		for(i = 0; i < 10; i++)
		{
			for(j = 0; j < 10; j++)
			{
				k = 0 + (rand () % 99);
				fprintf(pont_arq, " %02d", k);
			}
			
			fprintf(pont_arq, "\n");
		}
	
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");

	return 0;
}

