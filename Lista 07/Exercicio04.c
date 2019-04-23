#include <stdio.h>
#include <conio.h>
int main()
{
    int num, aux, uni, dez;
   
    char d[9][5] = {"X","XX","XXX","XL","L"};
    char u[9][5] = {"I","II","III","IV","V","VI","VII","VIII","IX"};
    
    FILE *pont_arq; 
    
    pont_arq = fopen("exercicio04.txt", "w");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
	
    for(num = 0; num <=50; num++)
    {
    	uni = num % 10; 
	    aux = num /10;
	    dez = aux % 10;
	    
	    
	    fprintf(pont_arq, "%d = %s%s\n", num, d[dez-1], u[uni-1]);
	}
    
    fclose(pont_arq);
    
    printf("Dados gravados com sucesso.");
      
}
