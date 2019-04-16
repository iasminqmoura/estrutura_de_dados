//04) Faça uma função que receba os valores da base e altura de um triângulo, e retorne a área do triângulo.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

float CalculaArea(float base, float altura);

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura;
	
	printf("Insira um valor para a base do triângulo: ");
	scanf("%f", &base);
	
	printf("Insira um valor para a altura do triângulo: ");
	scanf("%f", &altura);
	
	float area = CalculaArea(base, altura);
	printf("A área do triângulo é: %.2f", area);

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
