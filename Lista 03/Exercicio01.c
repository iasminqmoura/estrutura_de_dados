
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() 
{
	//01)Faça um código que gere dois números aleatórios entre zero e 100, e imprima os números do intervalo entre eles. Ex.: N1 = 17, N2 = 23. Imprime: 18, 19, 20, 21, 22
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int i;
	int num1, num2;
	
	num1 = rand() % 100;
	num2 = rand() % 100;
	
	if (num1 < num2)
            {
                for (i = num1 + 1; i < num2; i++)
                {
                    printf("%d\n", i);
                }

            }
            else
            {
                for (i = num2 + 1; i < num1; i++)
                {
                    printf("%d\n", i);
                }
            }
	

} 
