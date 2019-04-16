#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//10) Faça um código que verifique e mostre os números entre 1000 e 2000 que, quando divididos por 11 produzam resto 5.
	
	int i;
	
	for(i = 1; i < 100; i++)
	{
		
		if(i % 4 == 0)
		{
			printf("plim\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}

	return 0;
}


