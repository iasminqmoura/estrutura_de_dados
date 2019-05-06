#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
1) Crie um arquivo com o nome "imagem.pbm". O conteúdo desse arquivo deve ser exatamente como orientado. 
Primeira linha: P1. 
Segunda linha: #imagem.pbm. 
Terceira linha: 100 100. 
A partir da quarta linha: Gere uma matriz 100x100 com números aleatórios entre 0 e 1. 

Exemplo:

P1
#imagem.pbm
100 100
0 0 0 1 … 0
1 0 0 1 … 1
…

Abra o arquivo no GIMP ao invés do editor de textos.
*/

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	int matriz[100][100];
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("imagem.pbm", "w");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
	fprintf(pont_arq, "P1\n#imagem.pbm\n100 100\n");
	
	
	for(i = 0; i < 100; i++)
	{
		for(j = 0; j < 100; j++)
		{
			matriz[i][j] = rand()%2;
			fprintf(pont_arq, "%d ", matriz[i][j]);
		}
		fprintf(pont_arq, "\n");
	}
	
	fclose(pont_arq);
    
    printf("Dados gravados com sucesso.");
	
}
