//03) Faça um procedimento que receba um valor inteiro e imprima cinco números ímpares imediatamente abaixo, e cinco números pares imediatamente acima.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int ContValores(int num);

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira um valor inteiro e real: ");
	scanf("%d", &num);
	
	ContValores(num);

} 

int ContValores(int num){
	
	int i;
	
	for (i = num - 10; i <= num; i++)
	{
		if(i % 2 != 0)
		{
			printf("%d\n", i);	
		}
	}
	
	for (i = num; i <= num + 10; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\n", i);	
		}
	}
	
	
	
}
