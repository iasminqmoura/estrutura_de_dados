#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//3) Faça um código que receba números inteiros do usuário, e grave em um arquivo esses números,
//juntamente com as informações se ele é positivo ou negativo, se ele é par ou ímpar. 
//O programa só termina se o usuário digitar 0 (zero)

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
			printf("Insira um número inteiro (digite 0 para parar): ");
			scanf("%d", &num);
			
			if(num > 0)
			{
				fprintf(pont_arq, "O número %d é POSITIVO e ", num);	
			}
			else
			{
				fprintf(pont_arq, "O número %d é NEGATIVO e ", num);
			}
			
			if(num % 2 == 0)
			{
				fprintf(pont_arq, "PAR.\n");
			}
			else
			{
				fprintf(pont_arq, "ÍMPAR.\n");
			}
		}while(num!=0);

	
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");

	return 0;
}

