//04) Fa�a uma fun��o que receba os valores da base e altura de um tri�ngulo, e retorne a �rea do tri�ngulo.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

float CalculaArea(float base, float altura);

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura;
	
	printf("Insira um valor para a base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf("Insira um valor para a altura do tri�ngulo: ");
	scanf("%f", &altura);
	
	float area = CalculaArea(base, altura);
	printf("A �rea do tri�ngulo �: %.2f", area);

} 

float CalculaArea(float base, float altura){
	
	float area;
	
	if(base < 0 || altura < 0)
	{
		printf("Insira um valor maior que 0");
		return -1;
	}
	else
	{
		area = (base * altura) / 2;
		return area;
	}
	
	
	
}
