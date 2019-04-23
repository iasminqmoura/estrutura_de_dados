#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	int matriz[5][5];
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("exercicio06.txt", "w");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			matriz[i][j] = 10 + rand()%(10-99);
			fprintf(pont_arq, "%d ", matriz[i][j]);
		}
		fprintf(pont_arq, "\n");
	}
	
	fclose(pont_arq);
    
    printf("Dados gravados com sucesso.");
	
}
