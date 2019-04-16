//02) Faça um procedimento que receba um valor inteiro e imprima todos os valores entre zero e o número recebido.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int ContValores(int i, int num);

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira um valor inteiro e real: ");
	scanf("%d", &num);
	
	ContValores(0, num);

} 

int ContValores(int i, int num){

	for (i = 0; i <= num; i++)
	{
		printf("%d\n", i);
	}
	
}
