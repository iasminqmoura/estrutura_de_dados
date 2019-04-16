//07) Faça um procedimento que receba um valor inteiro aleatório, e imprima a sequência de Fibonacci do 1 até o número recebido (mais próximo).
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sequencia(int num);

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira um número inteiro positivo: ");
	scanf("%d", &num);
	
	int fib;
	int i = 0;
	
	while((fib = sequencia(i)) < num)
	{
		printf("%d\n", fib);
		i++;
	}

} 

int sequencia(int num){
	if(num < 2)
	{
		return 1;
	}
	
	return sequencia(num - 1) + sequencia(num - 2);
}
