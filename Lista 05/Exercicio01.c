#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	
	//01) Preencher um vetor com n�meros inteiros (oito elementos). Solicitar um n�mero do teclado. Pesquisar se esse n�mero existe no vetor. 
	//Se existir, imprimir em qual posi��o do vetor. Se n�o existir, imprimir uma mensagem que n�o existe.
	
	setlocale(LC_ALL, "Portuguese");
	
	int numVetor[8];
	int num, posicao;
	int i, j;
	
	printf("Insira 8 n�meros: \n");
	
	//Insere valores no vetor
	for(i = 0; i < 8; i++)
	{
		scanf("%d", &numVetor[i]);
	}
	
	printf("Insira o n�mero que deseja procurar no vetor: ");
	scanf("%d", &num);
	
	//Procura o n�mero no vetor
	for(i = 0; i < 8; i++)
	{
	if(num == numVetor[i]) //Se o n�mero for igual a algum n�mero inserido no vetor, imprime mensagem
	{
		posicao = i;
		printf("Valor %d encontrado na posi��o %d", num, posicao);
		
	}
	else
	{
		j = j + 1; //Se n�o, utiliza o contador
	}
	
	if(j > 8)
	{
		printf("Valor n�o encontrado!"); //Se o valor do contador for maior que o do vetor,
										 // � impressa a mensagem, j� que foi percorrido todo o vetor e nenhum valor foi encontrado.
	}
	}

} 

