#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
2) Crie um arquivo com o nome "imagem2.pgm". O conteúdo desse arquivo deve ser exatamente como orientado. 
Primeira linha: P2. 
Segunda linha: #imagem2.pgm. 
Terceira linha: 100 100. 
Quarta linha: 128. 
A partir da quinta linha: Gere uma matriz 100x100 com números aleatórios entre 0 e 128.

P2
#imagem2.pgm
100 100
128
50 23 14 123 … 45
11 78 84 79  … 100
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
    
    pont_arq = fopen("imagem2.pgm", "w");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
	fprintf(pont_arq, "P2\n#imagem2.pgm\n100 100\n");
	
	
	for(i = 0; i < 100; i++)
	{
		for(j = 0; j < 100; j++)
		{
			matriz[i][j] = 0 + (rand()%128);
			fprintf(pont_arq, "%d ", matriz[i][j]);
		}
		fprintf(pont_arq, "\n");
	}
	
	fclose(pont_arq);
    
    printf("Dados gravados com sucesso.");
	
}
