#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	FILE *pont_arq; 
	int num;
	
	pont_arq = fopen("exercicio03.txt", "w");
	
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
		do
		{
			printf("Insira um n�mero inteiro (digite 0 para parar): ");
			scanf("%d", &num);
			
			if(num > 0)
			{
				fprintf(pont_arq, "O n�mero %d � POSITIVO e ", num);	
			}
			else
			{
				fprintf(pont_arq, "O n�mero %d � NEGATIVO e ", num);
			}
			
			if(num % 2 == 0)
			{
				fprintf(pont_arq, "PAR.\n");
			}
			else
			{
				fprintf(pont_arq, "�MPAR.\n");
			}
		}while(num!=0);

	
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");

	return 0;
}

