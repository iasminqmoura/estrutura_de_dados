#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//01) Uma frase palíndroma é aquela que, ou se leia da esquerda para a direita, ou da direita para a esquerda, tem o mesmo sentido. 
//Os números, como as letras, também são símbolos e um número palíndromo (ou capicua) é aquele que é igual quando lido nos dois sentidos. 
//Exemplos: 14541, 7117, 3333, etc. Faça um programa que receba um número e retorne se ele é palíndromo ou não.
int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	int num, aux, reverso;
	
	printf("Insira um número inteiro: ");
	scanf("%d", &num);
	
	aux = num;
	reverso = 0;
	
	while(aux != 0)
	{
		reverso = reverso * 10 + aux % 10;
		aux = aux / 10;
	}
	
	if(reverso == num)
	{
		printf("%d é palíndrome!\n", num);
	}
	else
	{
		printf("%d não é palíndrome.\n", num);
	}
} 
