//06) Faça uma função que receba dois valores inteiros, e retorne a potência do primeiro pelo segundo.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float CalculaPotencia(float base, float potencia);

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	float base, potencia;
	
	printf("Insira um valor da base: ");
	scanf("%f", &base);
	
	printf("Insira um valor para da potência: ");
	scanf("%f", &potencia);
	
	float resultado = CalculaPotencia(base, potencia);
	
	printf("%.2f ^ %.2f = %.2f ", base, potencia, resultado);

} 

float CalculaPotencia(float base, float potencia){
	
	float resultado;
	
	resultado = pow(base,potencia);
	
	return resultado;
}
