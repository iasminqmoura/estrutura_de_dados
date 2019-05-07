#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
2) Salve o arquivo https://raw.githubusercontent.com/pythonprobr/palavras/master/palavras.txt e
	a) crie um código para exibr na tela somente as 100 primeiras linhas deste arquivo.
	b) crie um código para calcular quantas linhas tem este arquivo.
	c) crie um código para imprimir 100 palavras aleatórias deste arquivo.
*/

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	char str[256];
	int cont, i, n;
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("palavras.txt", "r");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}

	cont = 0;
	while(fscanf(pont_arq, " %[^\n]s", str) != EOF)
	{
		cont++;
	}

	printf("O arquivo possui %d linhas\n\n", cont);
	fclose(pont_arq);
	
	pont_arq = fopen("palavras.txt", "r");
	cont = 0;
	printf("100 PRIMEIRAS PALAVRAS: \n\n");
	while(fscanf(pont_arq, " %[^\n]s", str) != EOF && cont++ < 100)
	{
		printf("%s\n", str);
	}
	
	fclose(pont_arq);
	
	pont_arq = fopen("palavras.txt", "r");
	
	printf("\n\n\n");
	printf("100 PALAVRAS ALEATÓRIAS: \n\n");
	for(i = 0; i < 100; i++)
	{
		n = 0 + (rand()%320139);
		cont = 0;
		
		while(fscanf(pont_arq, " %[^\n]s", str) != EOF)
		{
			cont++;
			if(n == cont)
			{
				printf("%s\n", str);
				break;
			}
		}
		
		rewind(pont_arq);
	}
	
}
