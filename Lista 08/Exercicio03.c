#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
3) Crie um arquivo com o nome "imagem3.ppm". O conteúdo desse arquivo deve ser exatamente como orientado. 
Primeira linha: P3. 
Segunda linha: #imagem3.ppm. 
Terceira linha: 100 100. 
Quarta linha: 255. 
A partir da quinta linha: Gere uma matriz 100x300 com números aleatórios entre 0 e 255.

P3
#imagem3.ppm
100 100
255
250 123 14 123 … 245
211 178 84 179  … 100
…

Abra o arquivo no GIMP ao invés do editor de textos.
*/

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	int matriz[100][300];
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("imagem3.ppm", "w");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
	fprintf(pont_arq, "P3\n#imagem3.ppm\n100 100\n255\n");
	
	
	for(i = 0; i < 100; i++)
	{
		for(j = 0; j < 300; j++)
		{
			matriz[i][j] = 0 + (rand()%255);
			fprintf(pont_arq, "%d ", matriz[i][j]);
		}
		fprintf(pont_arq, "\n");
	}
	
	fclose(pont_arq);
    
    printf("Dados gravados com sucesso.");
	
}
