#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//09) Faça um código que verifique e mostre os números entre 1000 e 2000 que, quando divididos por 11 produzam resto 5.
	
	int i;
	
	for(i = 1000; i < 2000; i++)
	{
		if(i % 11 == 5)
		{
			printf("%d \n", i);
		}
	}

	return 0;
}


