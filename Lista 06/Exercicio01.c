#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//01) Uma frase pal�ndroma � aquela que, ou se leia da esquerda para a direita, ou da direita para a esquerda, tem o mesmo sentido. 
//Os n�meros, como as letras, tamb�m s�o s�mbolos e um n�mero pal�ndromo (ou capicua) � aquele que � igual quando lido nos dois sentidos. 
//Exemplos: 14541, 7117, 3333, etc. Fa�a um programa que receba um n�mero e retorne se ele � pal�ndromo ou n�o.
int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	int num, aux, reverso;
	
	printf("Insira um n�mero inteiro: ");
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
		printf("%d � pal�ndrome!\n", num);
	}
	else
	{
		printf("%d n�o � pal�ndrome.\n", num);
	}
} 
