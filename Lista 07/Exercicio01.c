#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//01) Faça um código que grave em um arquivo 100 números aleatórios entre -100 e 100.

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	/*01) Faça um código que grave em um arquivo 100 números aleatórios entre -100 e 100.
	
          Permissões para arquivos: 
          r: Permissão de abertura somente para leitura. É necessário que o arquivo já exista.
          w: Permissão de abertura para escrita (gravação). Cria o arquivo caso ele não exista
             e caso o mesmo exista ele RECRIA o arquivo novamente fazendo com que todos os dados
             existentes sejam perdidos. 
          a: Permissão para abrir um arquivo texto para escrita (gravação), permite acrescentar
             novos dados ao final do arquivo.
	*/
	
	// MIN + (rand() % (MAX - MIN) + 1)
	// -100 + (rand() % 201)
	
	FILE *pont_arq; //cria variável ponteiro para o arquivo 
	int i, j;
	
	//abrindo o arquivo com tipo de abertura W (sempre será gerado um novo arquivo com novos números aleatórios)
	pont_arq = fopen("exercicio01.txt", "w");
	
	//verificando se o arquivo foi realmente criado
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
		for(j = 0; j < 100; j++)
		{
			i = -100 + (rand () % 201);
			//Usando o fprintf para gravar os dados no arquivo
			fprintf(pont_arq, "%d\n", i);
		}
	
	//Usando o fclose para fechar o arquivo.
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");

	return 0;
}

