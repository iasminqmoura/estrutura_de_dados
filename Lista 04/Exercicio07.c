//07) Fa�a um procedimento que receba um valor inteiro aleat�rio, e imprima a sequ�ncia de Fibonacci do 1 at� o n�mero recebido (mais pr�ximo).
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sequencia(int num);

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira um n�mero inteiro positivo: ");
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
